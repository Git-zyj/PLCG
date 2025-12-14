#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_3 = 4233966289U;
long long int var_8 = 4959782562962479168LL;
int var_12 = -892729358;
short var_15 = (short)32402;
unsigned long long int var_19 = 5132443868917323261ULL;
int zero = 0;
long long int var_20 = -1873234301249051048LL;
long long int var_21 = 4469864273940806473LL;
void init() {
}

void checksum() {
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
