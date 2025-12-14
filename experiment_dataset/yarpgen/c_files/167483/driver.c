#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

_Bool var_0 = (_Bool)1;
int var_4 = -90861573;
unsigned int var_6 = 1600944196U;
_Bool var_8 = (_Bool)1;
int var_10 = 1994487899;
_Bool var_14 = (_Bool)1;
int zero = 0;
int var_15 = 1297795086;
int var_16 = 879838731;
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
