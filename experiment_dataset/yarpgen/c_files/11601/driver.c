#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_2 = 3437658809U;
_Bool var_3 = (_Bool)1;
_Bool var_6 = (_Bool)0;
long long int var_9 = 3383182547252663245LL;
_Bool var_11 = (_Bool)1;
int var_17 = 1769410923;
int zero = 0;
unsigned long long int var_19 = 553094376603450310ULL;
short var_20 = (short)7351;
int var_21 = 937978771;
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
