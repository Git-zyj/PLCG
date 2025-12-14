#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_4 = 10337980395112903579ULL;
int var_5 = 1336583878;
_Bool var_6 = (_Bool)1;
long long int var_7 = -3339036552145023490LL;
int var_9 = -1875846881;
int zero = 0;
int var_14 = -234891275;
unsigned int var_15 = 4093778858U;
void init() {
}

void checksum() {
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
