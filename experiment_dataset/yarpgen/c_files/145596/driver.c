#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_3 = 2740804094U;
unsigned char var_4 = (unsigned char)126;
short var_9 = (short)28706;
unsigned int var_10 = 3017672891U;
signed char var_11 = (signed char)122;
unsigned char var_13 = (unsigned char)245;
unsigned int var_14 = 412753985U;
int zero = 0;
signed char var_17 = (signed char)-7;
_Bool var_18 = (_Bool)0;
unsigned short var_19 = (unsigned short)26501;
void init() {
}

void checksum() {
    hash(&seed, var_17);
    hash(&seed, var_18);
    hash(&seed, var_19);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
