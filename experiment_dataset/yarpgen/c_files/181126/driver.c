#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

_Bool var_0 = (_Bool)0;
unsigned long long int var_1 = 6820143978270595447ULL;
long long int var_2 = -2561875423262390786LL;
long long int var_3 = -9097862796572601830LL;
short var_5 = (short)-25839;
unsigned char var_6 = (unsigned char)228;
unsigned int var_8 = 1001708204U;
unsigned long long int var_14 = 3993046808601807660ULL;
int var_15 = -297402633;
int zero = 0;
short var_19 = (short)26714;
int var_20 = -282350527;
unsigned long long int var_21 = 191115057298495080ULL;
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
