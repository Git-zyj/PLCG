#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_2 = (unsigned short)4392;
long long int var_7 = -5293329516881265169LL;
_Bool var_8 = (_Bool)0;
long long int var_11 = 6334097086419324828LL;
_Bool var_13 = (_Bool)1;
int zero = 0;
unsigned short var_15 = (unsigned short)57369;
int var_16 = -683114144;
void init() {
}

void checksum() {
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
