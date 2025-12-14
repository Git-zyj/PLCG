#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_1 = 5448977987874246971LL;
long long int var_2 = -8925945935614646350LL;
int var_8 = -840464482;
_Bool var_11 = (_Bool)1;
int var_13 = -1884065991;
int zero = 0;
unsigned long long int var_14 = 212640602871613785ULL;
int var_15 = 264725837;
unsigned char var_16 = (unsigned char)253;
void init() {
}

void checksum() {
    hash(&seed, var_14);
    hash(&seed, var_15);
    hash(&seed, var_16);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
