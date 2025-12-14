#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_3 = -287030076186700620LL;
long long int var_4 = -7483512066608222149LL;
short var_6 = (short)-24839;
int var_7 = 206605153;
signed char var_11 = (signed char)-2;
unsigned char var_13 = (unsigned char)12;
int zero = 0;
_Bool var_14 = (_Bool)0;
short var_15 = (short)11769;
unsigned int var_16 = 614695682U;
void init() {
}

void checksum() {
    hash(&seed, var_14);
    hash(&seed, var_15);
    hash(&seed, var_16);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
