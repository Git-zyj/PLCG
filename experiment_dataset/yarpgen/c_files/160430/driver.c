#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_3 = 3188650474U;
signed char var_5 = (signed char)58;
signed char var_11 = (signed char)118;
unsigned char var_13 = (unsigned char)71;
short var_14 = (short)-11162;
unsigned short var_16 = (unsigned short)44309;
signed char var_17 = (signed char)-84;
int zero = 0;
signed char var_18 = (signed char)-27;
_Bool var_19 = (_Bool)1;
unsigned short var_20 = (unsigned short)12248;
void init() {
}

void checksum() {
    hash(&seed, var_18);
    hash(&seed, var_19);
    hash(&seed, var_20);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
