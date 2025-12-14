#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

_Bool var_0 = (_Bool)1;
unsigned long long int var_9 = 10906623925360351219ULL;
long long int var_10 = -2700590219495247755LL;
_Bool var_11 = (_Bool)1;
unsigned int var_13 = 18637161U;
int zero = 0;
signed char var_14 = (signed char)-56;
unsigned char var_15 = (unsigned char)182;
int var_16 = 1251872955;
_Bool var_17 = (_Bool)0;
void init() {
}

void checksum() {
    hash(&seed, var_14);
    hash(&seed, var_15);
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
