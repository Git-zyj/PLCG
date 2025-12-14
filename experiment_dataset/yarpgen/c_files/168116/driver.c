#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_0 = 6540235926554846342ULL;
signed char var_7 = (signed char)-119;
long long int var_9 = -4644325942645473277LL;
_Bool var_13 = (_Bool)1;
int zero = 0;
unsigned long long int var_14 = 3873836738477461074ULL;
signed char var_15 = (signed char)-21;
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
