#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

_Bool var_3 = (_Bool)0;
unsigned int var_4 = 4293190181U;
unsigned char var_9 = (unsigned char)72;
unsigned int var_13 = 878721593U;
int zero = 0;
unsigned short var_16 = (unsigned short)18368;
unsigned int var_17 = 2875859524U;
unsigned int var_18 = 2770041432U;
short var_19 = (short)11868;
void init() {
}

void checksum() {
    hash(&seed, var_16);
    hash(&seed, var_17);
    hash(&seed, var_18);
    hash(&seed, var_19);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
