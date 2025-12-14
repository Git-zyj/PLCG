#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_2 = (signed char)22;
unsigned int var_3 = 531299405U;
unsigned long long int var_5 = 16594528803442397218ULL;
short var_8 = (short)-13267;
unsigned char var_9 = (unsigned char)230;
signed char var_10 = (signed char)-67;
unsigned char var_12 = (unsigned char)219;
int zero = 0;
unsigned long long int var_13 = 1554022903996557490ULL;
unsigned int var_14 = 3058335533U;
int var_15 = -1043580194;
unsigned long long int var_16 = 5172633461752854806ULL;
void init() {
}

void checksum() {
    hash(&seed, var_13);
    hash(&seed, var_14);
    hash(&seed, var_15);
    hash(&seed, var_16);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
