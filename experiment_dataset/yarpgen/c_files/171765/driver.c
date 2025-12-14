#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

_Bool var_0 = (_Bool)1;
long long int var_7 = -5156614519847165481LL;
_Bool var_8 = (_Bool)1;
unsigned int var_10 = 901432682U;
unsigned int var_14 = 418784337U;
int zero = 0;
unsigned int var_17 = 2756640711U;
signed char var_18 = (signed char)-59;
unsigned int var_19 = 413513269U;
void init() {
}

void checksum() {
    hash(&seed, var_17);
    hash(&seed, var_18);
    hash(&seed, var_19);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
