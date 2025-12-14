#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_0 = (unsigned char)250;
signed char var_1 = (signed char)-109;
signed char var_2 = (signed char)104;
int var_3 = 214921984;
unsigned short var_4 = (unsigned short)5316;
unsigned int var_6 = 3011077461U;
signed char var_7 = (signed char)15;
long long int var_8 = 8179483908462009544LL;
_Bool var_10 = (_Bool)0;
int var_11 = -1460315825;
unsigned int var_12 = 1355623491U;
signed char var_13 = (signed char)-50;
int zero = 0;
short var_16 = (short)-24573;
signed char var_17 = (signed char)-35;
unsigned short var_18 = (unsigned short)29456;
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
