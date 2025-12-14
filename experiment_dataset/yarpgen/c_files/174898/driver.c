#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

_Bool var_5 = (_Bool)1;
_Bool var_7 = (_Bool)1;
signed char var_12 = (signed char)-1;
int zero = 0;
signed char var_15 = (signed char)-50;
signed char var_16 = (signed char)-103;
_Bool var_17 = (_Bool)0;
unsigned int var_18 = 3875500707U;
signed char var_19 = (signed char)-51;
void init() {
}

void checksum() {
    hash(&seed, var_15);
    hash(&seed, var_16);
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
