#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

_Bool var_1 = (_Bool)1;
long long int var_7 = 5109843715149983485LL;
short var_9 = (short)8430;
signed char var_11 = (signed char)7;
unsigned long long int var_12 = 2992107083455344278ULL;
int zero = 0;
_Bool var_15 = (_Bool)0;
signed char var_16 = (signed char)-71;
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
