#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_2 = 1157361393958322002ULL;
unsigned short var_3 = (unsigned short)5615;
_Bool var_4 = (_Bool)0;
short var_6 = (short)27422;
_Bool var_7 = (_Bool)1;
unsigned char var_8 = (unsigned char)115;
int var_9 = 1898963555;
int zero = 0;
unsigned int var_10 = 388969804U;
unsigned long long int var_11 = 2258704892832919359ULL;
unsigned char var_12 = (unsigned char)190;
short var_13 = (short)-21493;
unsigned short var_14 = (unsigned short)4661;
void init() {
}

void checksum() {
    hash(&seed, var_10);
    hash(&seed, var_11);
    hash(&seed, var_12);
    hash(&seed, var_13);
    hash(&seed, var_14);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
