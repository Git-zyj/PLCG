#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_1 = 3030020719U;
signed char var_2 = (signed char)50;
unsigned short var_3 = (unsigned short)24085;
_Bool var_4 = (_Bool)0;
signed char var_6 = (signed char)(-127 - 1);
int var_9 = 815356434;
unsigned char var_11 = (unsigned char)179;
signed char var_14 = (signed char)-74;
int zero = 0;
int var_16 = 490161086;
unsigned short var_17 = (unsigned short)41139;
short var_18 = (short)31068;
short var_19 = (short)-16331;
void init() {
}

void checksum() {
    hash(&seed, var_16);
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
