#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_2 = (short)-16331;
unsigned int var_5 = 3503393714U;
unsigned int var_7 = 2837712160U;
unsigned int var_10 = 3726826317U;
int zero = 0;
unsigned int var_16 = 4149033824U;
long long int var_17 = -5375627219677800576LL;
unsigned int var_18 = 1347489524U;
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
