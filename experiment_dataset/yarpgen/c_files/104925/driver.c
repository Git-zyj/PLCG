#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

_Bool var_0 = (_Bool)1;
signed char var_3 = (signed char)118;
_Bool var_5 = (_Bool)1;
signed char var_7 = (signed char)20;
unsigned long long int var_10 = 12824955543288393742ULL;
_Bool var_11 = (_Bool)0;
int zero = 0;
_Bool var_12 = (_Bool)0;
signed char var_13 = (signed char)-58;
unsigned int var_14 = 965503220U;
void init() {
}

void checksum() {
    hash(&seed, var_12);
    hash(&seed, var_13);
    hash(&seed, var_14);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
