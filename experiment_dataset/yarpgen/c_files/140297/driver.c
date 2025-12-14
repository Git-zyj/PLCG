#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_1 = (unsigned char)29;
_Bool var_3 = (_Bool)0;
int var_4 = 252962180;
long long int var_8 = 3447348116541949909LL;
unsigned int var_9 = 2308482516U;
_Bool var_14 = (_Bool)1;
int zero = 0;
long long int var_16 = -6358734828992988056LL;
unsigned char var_17 = (unsigned char)246;
void init() {
}

void checksum() {
    hash(&seed, var_16);
    hash(&seed, var_17);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
