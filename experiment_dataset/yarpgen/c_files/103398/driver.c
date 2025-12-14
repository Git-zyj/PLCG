#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_0 = -1714460412;
_Bool var_1 = (_Bool)1;
unsigned char var_2 = (unsigned char)163;
unsigned char var_3 = (unsigned char)179;
int var_4 = 2117971545;
_Bool var_5 = (_Bool)1;
int var_6 = -97973805;
unsigned short var_7 = (unsigned short)63069;
_Bool var_8 = (_Bool)1;
int var_9 = 178036026;
int zero = 0;
_Bool var_11 = (_Bool)1;
int var_12 = 1657221102;
_Bool var_13 = (_Bool)0;
_Bool var_14 = (_Bool)1;
unsigned char var_15 = (unsigned char)155;
_Bool var_16 = (_Bool)0;
unsigned char var_17 = (unsigned char)120;
_Bool var_18 = (_Bool)0;
void init() {
}

void checksum() {
    hash(&seed, var_11);
    hash(&seed, var_12);
    hash(&seed, var_13);
    hash(&seed, var_14);
    hash(&seed, var_15);
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
