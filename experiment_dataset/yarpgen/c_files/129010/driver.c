#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_2 = (short)17503;
short var_3 = (short)-27974;
int var_10 = 333141093;
short var_12 = (short)-21654;
unsigned long long int var_17 = 9890873749830676647ULL;
int zero = 0;
long long int var_20 = 1172097986878533792LL;
unsigned long long int var_21 = 6822617544438403965ULL;
_Bool var_22 = (_Bool)0;
void init() {
}

void checksum() {
    hash(&seed, var_20);
    hash(&seed, var_21);
    hash(&seed, var_22);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
