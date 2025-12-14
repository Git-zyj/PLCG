#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_0 = -1923434301;
int var_3 = -323177884;
_Bool var_5 = (_Bool)1;
_Bool var_6 = (_Bool)1;
unsigned int var_7 = 3326423368U;
signed char var_10 = (signed char)-16;
int zero = 0;
signed char var_14 = (signed char)-92;
signed char var_15 = (signed char)106;
void init() {
}

void checksum() {
    hash(&seed, var_14);
    hash(&seed, var_15);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
