#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_1 = 170935525280256967LL;
unsigned char var_3 = (unsigned char)139;
_Bool var_7 = (_Bool)0;
int var_8 = 492892876;
long long int var_11 = -5518481634702973893LL;
int zero = 0;
int var_12 = 1138938969;
unsigned long long int var_13 = 9432370729822811907ULL;
int var_14 = -1234936745;
int var_15 = 1980714977;
void init() {
}

void checksum() {
    hash(&seed, var_12);
    hash(&seed, var_13);
    hash(&seed, var_14);
    hash(&seed, var_15);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
