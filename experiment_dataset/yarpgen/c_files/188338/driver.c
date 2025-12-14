#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_0 = 1048790473;
unsigned long long int var_1 = 18219617347424405443ULL;
unsigned char var_2 = (unsigned char)109;
long long int var_3 = 2205202394711817424LL;
unsigned int var_6 = 1010245471U;
unsigned int var_7 = 1970498240U;
int var_12 = 600323006;
_Bool var_13 = (_Bool)1;
_Bool var_14 = (_Bool)0;
int zero = 0;
long long int var_18 = 6741919312931547948LL;
_Bool var_19 = (_Bool)0;
unsigned long long int var_20 = 14032756263107898678ULL;
unsigned int var_21 = 3774967614U;
unsigned long long int var_22 = 11585451895410990012ULL;
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
