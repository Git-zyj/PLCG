#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_1 = (unsigned short)46407;
_Bool var_2 = (_Bool)1;
unsigned char var_5 = (unsigned char)130;
unsigned int var_7 = 1799654369U;
unsigned int var_10 = 3404939033U;
int zero = 0;
unsigned long long int var_14 = 4142673193539757101ULL;
unsigned int var_15 = 1088143912U;
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
