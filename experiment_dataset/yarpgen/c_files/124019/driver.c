#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

_Bool var_0 = (_Bool)1;
long long int var_4 = -3193227792257545222LL;
long long int var_5 = 8940706339923444132LL;
_Bool var_7 = (_Bool)0;
unsigned long long int var_8 = 12252516262809128281ULL;
unsigned char var_9 = (unsigned char)146;
unsigned int var_11 = 2396611950U;
int zero = 0;
_Bool var_17 = (_Bool)0;
long long int var_18 = -5749089489620183892LL;
unsigned char var_19 = (unsigned char)176;
_Bool var_20 = (_Bool)1;
void init() {
}

void checksum() {
    hash(&seed, var_17);
    hash(&seed, var_18);
    hash(&seed, var_19);
    hash(&seed, var_20);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
