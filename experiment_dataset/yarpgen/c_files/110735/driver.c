#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_0 = 16175806116397395819ULL;
short var_1 = (short)-23543;
_Bool var_8 = (_Bool)0;
int var_11 = -558436102;
unsigned long long int var_17 = 8413343761382297227ULL;
int zero = 0;
long long int var_18 = -1610009238304883899LL;
unsigned char var_19 = (unsigned char)248;
int var_20 = 2040386782;
unsigned long long int var_21 = 1950281888241649614ULL;
int var_22 = -210566307;
void init() {
}

void checksum() {
    hash(&seed, var_18);
    hash(&seed, var_19);
    hash(&seed, var_20);
    hash(&seed, var_21);
    hash(&seed, var_22);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
