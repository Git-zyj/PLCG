#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_4 = 1042340695U;
unsigned char var_7 = (unsigned char)33;
unsigned char var_9 = (unsigned char)3;
_Bool var_10 = (_Bool)1;
int var_11 = 1782468816;
int zero = 0;
long long int var_18 = 7595651069093478237LL;
unsigned long long int var_19 = 955152608162022891ULL;
_Bool var_20 = (_Bool)0;
void init() {
}

void checksum() {
    hash(&seed, var_18);
    hash(&seed, var_19);
    hash(&seed, var_20);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
