#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_0 = 3465834533843454227ULL;
long long int var_7 = -7345118290737877569LL;
unsigned long long int var_8 = 13557433940611720612ULL;
int var_12 = 1698644576;
_Bool var_14 = (_Bool)1;
int zero = 0;
int var_15 = -226437118;
long long int var_16 = 390532214260736496LL;
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
