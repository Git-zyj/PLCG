#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_0 = 5629834096553710783LL;
long long int var_1 = 6146960755088850882LL;
long long int var_3 = 357464324349630940LL;
long long int var_8 = 1256477728191764716LL;
int zero = 0;
long long int var_12 = 1786039553998087067LL;
long long int var_13 = -2356788564426973328LL;
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
