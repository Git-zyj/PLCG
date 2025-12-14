#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_0 = 1796092297U;
unsigned long long int var_4 = 7971340755678416159ULL;
int var_8 = 980668881;
long long int var_9 = 5147094582090708375LL;
long long int var_11 = 3583315860453035475LL;
long long int var_12 = 2822126361434980802LL;
unsigned long long int var_13 = 13392187164857680399ULL;
int zero = 0;
int var_14 = 1051164396;
unsigned int var_15 = 4121048728U;
unsigned int var_16 = 1288975019U;
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
