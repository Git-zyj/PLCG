#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_0 = 14250167873007475612ULL;
unsigned long long int var_2 = 3529884912379450451ULL;
_Bool var_7 = (_Bool)0;
long long int var_14 = 1201786266291419144LL;
_Bool var_16 = (_Bool)1;
int zero = 0;
unsigned long long int var_19 = 10343825438697719122ULL;
long long int var_20 = 5153368768402205375LL;
void init() {
}

void checksum() {
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
