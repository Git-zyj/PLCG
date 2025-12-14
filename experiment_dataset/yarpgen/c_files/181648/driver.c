#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

_Bool var_0 = (_Bool)1;
long long int var_3 = -5784538968225374196LL;
unsigned long long int var_4 = 6372924743179740065ULL;
unsigned char var_7 = (unsigned char)86;
unsigned int var_8 = 803868472U;
unsigned int var_9 = 2888248060U;
int zero = 0;
short var_11 = (short)-29074;
unsigned short var_12 = (unsigned short)37782;
unsigned int var_13 = 3499200390U;
long long int var_14 = 1481685279940802912LL;
void init() {
}

void checksum() {
    hash(&seed, var_11);
    hash(&seed, var_12);
    hash(&seed, var_13);
    hash(&seed, var_14);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
