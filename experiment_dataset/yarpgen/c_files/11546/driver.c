#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_0 = 3291801626996366947ULL;
short var_4 = (short)4805;
unsigned short var_10 = (unsigned short)64316;
unsigned int var_13 = 972565512U;
unsigned char var_14 = (unsigned char)67;
unsigned short var_17 = (unsigned short)50780;
int zero = 0;
unsigned char var_20 = (unsigned char)178;
long long int var_21 = -8307955093030732205LL;
void init() {
}

void checksum() {
    hash(&seed, var_20);
    hash(&seed, var_21);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
