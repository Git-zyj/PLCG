#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_2 = 3398262696U;
unsigned char var_5 = (unsigned char)43;
int var_6 = 721471398;
unsigned short var_7 = (unsigned short)61134;
int zero = 0;
unsigned char var_10 = (unsigned char)156;
short var_11 = (short)-17696;
unsigned long long int var_12 = 13264163172343319532ULL;
_Bool var_13 = (_Bool)1;
void init() {
}

void checksum() {
    hash(&seed, var_10);
    hash(&seed, var_11);
    hash(&seed, var_12);
    hash(&seed, var_13);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
