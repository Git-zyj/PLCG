#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_0 = -4038576638897650605LL;
unsigned char var_3 = (unsigned char)187;
_Bool var_4 = (_Bool)0;
unsigned short var_6 = (unsigned short)63321;
unsigned long long int var_7 = 15882378161008727930ULL;
unsigned int var_8 = 448434208U;
_Bool var_14 = (_Bool)0;
int zero = 0;
unsigned char var_19 = (unsigned char)10;
int var_20 = -1638404977;
short var_21 = (short)-28990;
void init() {
}

void checksum() {
    hash(&seed, var_19);
    hash(&seed, var_20);
    hash(&seed, var_21);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
