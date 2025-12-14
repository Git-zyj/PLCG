#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_5 = (short)25177;
unsigned int var_13 = 3902382160U;
unsigned short var_15 = (unsigned short)50755;
int zero = 0;
unsigned short var_16 = (unsigned short)15963;
unsigned long long int var_17 = 13372214986804803229ULL;
long long int var_18 = 8141381967394246439LL;
void init() {
}

void checksum() {
    hash(&seed, var_16);
    hash(&seed, var_17);
    hash(&seed, var_18);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
