#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_4 = (short)8362;
unsigned long long int var_5 = 10555199379519273092ULL;
int var_6 = 483607639;
short var_11 = (short)16443;
int zero = 0;
short var_14 = (short)23313;
unsigned short var_15 = (unsigned short)4407;
long long int var_16 = -1134463697892782335LL;
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
