#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_5 = (unsigned char)164;
short var_7 = (short)20226;
unsigned char var_11 = (unsigned char)111;
signed char var_17 = (signed char)-51;
int zero = 0;
unsigned short var_20 = (unsigned short)59710;
unsigned char var_21 = (unsigned char)163;
signed char var_22 = (signed char)91;
void init() {
}

void checksum() {
    hash(&seed, var_20);
    hash(&seed, var_21);
    hash(&seed, var_22);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
