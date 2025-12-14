#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_3 = 3706320526U;
long long int var_5 = 7978704536552764804LL;
unsigned long long int var_6 = 17141987599033837184ULL;
long long int var_8 = -196536863177163653LL;
unsigned short var_12 = (unsigned short)38381;
int zero = 0;
signed char var_14 = (signed char)94;
_Bool var_15 = (_Bool)0;
_Bool var_16 = (_Bool)1;
void init() {
}

void checksum() {
    hash(&seed, var_14);
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
