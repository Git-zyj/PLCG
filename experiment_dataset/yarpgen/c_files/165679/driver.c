#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_1 = (unsigned short)15624;
_Bool var_5 = (_Bool)1;
long long int var_15 = -7101500811983100140LL;
int zero = 0;
_Bool var_20 = (_Bool)1;
long long int var_21 = -241097006544607512LL;
unsigned long long int var_22 = 17192156962327466871ULL;
_Bool var_23 = (_Bool)0;
void init() {
}

void checksum() {
    hash(&seed, var_20);
    hash(&seed, var_21);
    hash(&seed, var_22);
    hash(&seed, var_23);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
