#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_5 = (short)-15324;
signed char var_6 = (signed char)-116;
_Bool var_7 = (_Bool)1;
_Bool var_8 = (_Bool)1;
unsigned short var_13 = (unsigned short)39235;
int zero = 0;
_Bool var_14 = (_Bool)1;
unsigned int var_15 = 3901577659U;
signed char var_16 = (signed char)-105;
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
