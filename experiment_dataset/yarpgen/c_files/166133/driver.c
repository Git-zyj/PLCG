#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_4 = 3371165489U;
long long int var_6 = -4518632719969794082LL;
unsigned int var_8 = 3148125044U;
unsigned long long int var_9 = 11502064914836030837ULL;
int zero = 0;
_Bool var_11 = (_Bool)1;
unsigned long long int var_12 = 12360962721615273726ULL;
int var_13 = -2082037240;
unsigned int var_14 = 1429065839U;
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
