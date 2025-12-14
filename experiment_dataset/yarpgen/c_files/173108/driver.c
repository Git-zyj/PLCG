#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_1 = (signed char)92;
unsigned int var_10 = 4233038084U;
_Bool var_11 = (_Bool)1;
long long int var_12 = 8316205231579560736LL;
int var_16 = 749337016;
int zero = 0;
unsigned short var_17 = (unsigned short)23418;
unsigned int var_18 = 3943499464U;
unsigned short var_19 = (unsigned short)39808;
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
