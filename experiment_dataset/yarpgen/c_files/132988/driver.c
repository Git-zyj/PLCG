#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_0 = 279154334;
unsigned short var_1 = (unsigned short)34195;
unsigned int var_6 = 3671705563U;
int zero = 0;
unsigned long long int var_12 = 13770193053922818275ULL;
_Bool var_13 = (_Bool)1;
unsigned short var_14 = (unsigned short)27518;
unsigned long long int var_15 = 2188917600372810733ULL;
int var_16 = -1031150282;
void init() {
}

void checksum() {
    hash(&seed, var_12);
    hash(&seed, var_13);
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
