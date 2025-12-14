#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_0 = 8370948240028203852LL;
_Bool var_1 = (_Bool)0;
int var_2 = -2070221263;
int var_3 = -930567248;
unsigned char var_4 = (unsigned char)98;
unsigned short var_6 = (unsigned short)65319;
short var_7 = (short)1563;
_Bool var_8 = (_Bool)0;
int var_10 = -1425960503;
int zero = 0;
unsigned short var_11 = (unsigned short)20241;
signed char var_12 = (signed char)-51;
unsigned short var_13 = (unsigned short)61822;
_Bool var_14 = (_Bool)0;
void init() {
}

void checksum() {
    hash(&seed, var_11);
    hash(&seed, var_12);
    hash(&seed, var_13);
    hash(&seed, var_14);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
