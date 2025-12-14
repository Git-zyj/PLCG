#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_0 = (short)-6391;
short var_1 = (short)17125;
unsigned long long int var_4 = 16160489257874052043ULL;
short var_6 = (short)-30348;
int var_10 = -940166920;
_Bool var_12 = (_Bool)1;
unsigned long long int var_13 = 14501402893062358518ULL;
_Bool var_14 = (_Bool)0;
int zero = 0;
unsigned short var_15 = (unsigned short)22704;
long long int var_16 = -4085900369573761820LL;
int var_17 = -1472748858;
unsigned long long int var_18 = 11474249658414151546ULL;
void init() {
}

void checksum() {
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
