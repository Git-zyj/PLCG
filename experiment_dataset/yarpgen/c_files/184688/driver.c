#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_0 = 1005399756;
unsigned short var_3 = (unsigned short)2793;
short var_5 = (short)8236;
_Bool var_7 = (_Bool)1;
unsigned long long int var_8 = 16786519038625166398ULL;
_Bool var_15 = (_Bool)1;
int var_19 = 388769782;
int zero = 0;
_Bool var_20 = (_Bool)1;
unsigned short var_21 = (unsigned short)40075;
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
