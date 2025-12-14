#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_2 = 2600992264U;
long long int var_6 = 2347518069681939770LL;
int var_7 = -1594575909;
unsigned long long int var_11 = 14144129040234241682ULL;
int zero = 0;
unsigned int var_14 = 3204628002U;
long long int var_15 = -7299951541180261714LL;
signed char var_16 = (signed char)-4;
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
