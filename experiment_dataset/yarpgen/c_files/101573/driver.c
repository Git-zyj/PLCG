#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_0 = 2630130096041357667ULL;
unsigned char var_1 = (unsigned char)177;
short var_2 = (short)-24263;
long long int var_3 = -7302016164100754343LL;
signed char var_4 = (signed char)68;
int var_5 = -1978007998;
int var_10 = -2047114858;
unsigned long long int var_11 = 17604497267729989532ULL;
signed char var_12 = (signed char)-6;
int var_13 = 1143275982;
int zero = 0;
signed char var_16 = (signed char)-50;
int var_17 = -909257736;
long long int var_18 = -7884829886826378538LL;
short var_19 = (short)16028;
unsigned char var_20 = (unsigned char)152;
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
