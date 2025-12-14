#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

_Bool var_3 = (_Bool)1;
unsigned int var_7 = 816025225U;
long long int var_12 = -3591539916485140714LL;
signed char var_14 = (signed char)-106;
unsigned int var_16 = 550041324U;
long long int var_17 = 5592197764000051196LL;
_Bool var_18 = (_Bool)0;
int zero = 0;
_Bool var_19 = (_Bool)1;
unsigned int var_20 = 1039326882U;
unsigned long long int var_21 = 15479274601951609847ULL;
unsigned int var_22 = 4066241666U;
short var_23 = (short)-31080;
void init() {
}

void checksum() {
    hash(&seed, var_19);
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
