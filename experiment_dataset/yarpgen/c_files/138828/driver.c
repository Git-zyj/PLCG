#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_1 = (signed char)48;
unsigned long long int var_3 = 18214184510813060943ULL;
unsigned short var_5 = (unsigned short)39068;
unsigned long long int var_6 = 5161031110481472387ULL;
signed char var_7 = (signed char)104;
unsigned short var_15 = (unsigned short)46516;
int zero = 0;
_Bool var_18 = (_Bool)1;
unsigned long long int var_19 = 6246331492226282604ULL;
unsigned short var_20 = (unsigned short)24289;
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
