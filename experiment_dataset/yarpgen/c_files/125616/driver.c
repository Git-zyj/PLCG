#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_2 = 15133125427604154582ULL;
unsigned long long int var_3 = 6196298649796523636ULL;
unsigned long long int var_8 = 3180028430747223351ULL;
int var_10 = -1675202342;
int zero = 0;
int var_12 = 1166793735;
unsigned long long int var_13 = 4572721782277387781ULL;
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
