#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_0 = 5660543787184216415LL;
unsigned long long int var_3 = 3431343887358478662ULL;
unsigned long long int var_5 = 17006207969380145523ULL;
unsigned long long int var_6 = 5491358572726552219ULL;
unsigned int var_12 = 3330014442U;
unsigned int var_17 = 137706717U;
int zero = 0;
unsigned char var_18 = (unsigned char)213;
unsigned long long int var_19 = 6223430800467344041ULL;
short var_20 = (short)4082;
void init() {
}

void checksum() {
    hash(&seed, var_18);
    hash(&seed, var_19);
    hash(&seed, var_20);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
