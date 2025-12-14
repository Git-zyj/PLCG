#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_0 = 1342347436789738923ULL;
signed char var_2 = (signed char)-49;
_Bool var_3 = (_Bool)0;
short var_5 = (short)-26518;
unsigned long long int var_6 = 8461109260904264641ULL;
short var_8 = (short)17443;
short var_10 = (short)29888;
int var_12 = -947450342;
unsigned char var_13 = (unsigned char)193;
int zero = 0;
short var_16 = (short)-11035;
unsigned long long int var_17 = 14949175614032261387ULL;
unsigned short var_18 = (unsigned short)36063;
_Bool var_19 = (_Bool)1;
int var_20 = -1728180707;
void init() {
}

void checksum() {
    hash(&seed, var_16);
    hash(&seed, var_17);
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
