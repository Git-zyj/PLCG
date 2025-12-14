#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_6 = (signed char)-52;
signed char var_8 = (signed char)79;
_Bool var_11 = (_Bool)0;
_Bool var_12 = (_Bool)0;
signed char var_17 = (signed char)118;
int zero = 0;
signed char var_18 = (signed char)101;
signed char var_19 = (signed char)115;
signed char var_20 = (signed char)-45;
void init() {
}

void checksum() {
    hash(&seed, var_18);
    hash(&seed, var_19);
    hash(&seed, var_20);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
