#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_4 = (unsigned short)29616;
unsigned long long int var_5 = 13871008064910218171ULL;
_Bool var_6 = (_Bool)0;
unsigned long long int var_8 = 8554060286737436906ULL;
long long int var_10 = 6078208879419816109LL;
unsigned int var_11 = 920260140U;
int zero = 0;
_Bool var_12 = (_Bool)0;
long long int var_13 = -7950714845099092713LL;
unsigned short var_14 = (unsigned short)17384;
void init() {
}

void checksum() {
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
