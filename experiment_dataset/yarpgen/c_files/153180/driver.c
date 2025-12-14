#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_2 = 14096829350565583472ULL;
long long int var_3 = -4490613022011343976LL;
unsigned char var_5 = (unsigned char)130;
unsigned int var_6 = 2880122158U;
_Bool var_10 = (_Bool)1;
unsigned long long int var_11 = 3532178201998168149ULL;
int zero = 0;
int var_12 = 414582710;
long long int var_13 = -246383648635747239LL;
void init() {
}

void checksum() {
    hash(&seed, var_12);
    hash(&seed, var_13);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
