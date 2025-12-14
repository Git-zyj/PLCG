#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_2 = (unsigned char)56;
long long int var_3 = 7971120137645535728LL;
_Bool var_6 = (_Bool)0;
int zero = 0;
_Bool var_10 = (_Bool)0;
unsigned long long int var_11 = 6748988917476578899ULL;
unsigned short var_12 = (unsigned short)17304;
void init() {
}

void checksum() {
    hash(&seed, var_10);
    hash(&seed, var_11);
    hash(&seed, var_12);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
