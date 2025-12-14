#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_0 = 2876306022U;
unsigned int var_2 = 293895767U;
long long int var_3 = 8608670189675437458LL;
unsigned int var_4 = 1037209970U;
long long int var_7 = 7114560438882395377LL;
int zero = 0;
unsigned int var_11 = 857232541U;
_Bool var_12 = (_Bool)1;
long long int var_13 = -1940465333664710391LL;
void init() {
}

void checksum() {
    hash(&seed, var_11);
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
