#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_1 = 13790427725279596683ULL;
unsigned long long int var_5 = 7631471739117992618ULL;
int var_8 = 737428839;
int var_9 = -1140187555;
int zero = 0;
_Bool var_10 = (_Bool)1;
unsigned int var_11 = 2759235225U;
void init() {
}

void checksum() {
    hash(&seed, var_10);
    hash(&seed, var_11);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
