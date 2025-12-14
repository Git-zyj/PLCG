#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_1 = 2857400692U;
long long int var_2 = 5293047895529900965LL;
short var_3 = (short)-11370;
int var_4 = 737165599;
_Bool var_5 = (_Bool)0;
unsigned long long int var_6 = 17774837642639044667ULL;
unsigned char var_8 = (unsigned char)161;
signed char var_10 = (signed char)-120;
int var_11 = 969209727;
long long int var_12 = -7247628155561346085LL;
signed char var_13 = (signed char)68;
short var_14 = (short)-7653;
int zero = 0;
unsigned char var_17 = (unsigned char)200;
unsigned char var_18 = (unsigned char)178;
unsigned long long int var_19 = 12701907366486481745ULL;
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
