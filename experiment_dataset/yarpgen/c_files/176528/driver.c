#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_2 = (unsigned short)55607;
_Bool var_4 = (_Bool)1;
unsigned short var_6 = (unsigned short)3991;
_Bool var_7 = (_Bool)0;
unsigned short var_8 = (unsigned short)50555;
unsigned long long int var_10 = 7832028401898895778ULL;
int zero = 0;
unsigned int var_11 = 1149107U;
unsigned short var_12 = (unsigned short)18142;
unsigned short var_13 = (unsigned short)8925;
int var_14 = -1850327467;
void init() {
}

void checksum() {
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
