#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_1 = (unsigned char)196;
signed char var_6 = (signed char)-53;
signed char var_8 = (signed char)104;
_Bool var_10 = (_Bool)1;
int zero = 0;
unsigned char var_16 = (unsigned char)188;
short var_17 = (short)-13117;
int var_18 = -539232311;
void init() {
}

void checksum() {
    hash(&seed, var_16);
    hash(&seed, var_17);
    hash(&seed, var_18);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
