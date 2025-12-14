#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_0 = 18309865453684990440ULL;
long long int var_6 = 4024864188239421056LL;
int zero = 0;
unsigned long long int var_16 = 10246009908384218578ULL;
long long int var_17 = 5687758831495876425LL;
unsigned long long int var_18 = 5771815707767607966ULL;
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
