#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_0 = (unsigned char)252;
long long int var_6 = -1066232149679484185LL;
long long int var_8 = 5557434005713546175LL;
unsigned long long int var_9 = 17975938570378271534ULL;
int zero = 0;
_Bool var_12 = (_Bool)0;
int var_13 = 388692408;
_Bool var_14 = (_Bool)1;
signed char var_15 = (signed char)-67;
void init() {
}

void checksum() {
    hash(&seed, var_12);
    hash(&seed, var_13);
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
