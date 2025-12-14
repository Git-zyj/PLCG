#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_6 = -224852161;
_Bool var_8 = (_Bool)0;
signed char var_13 = (signed char)21;
int var_14 = 179251164;
int zero = 0;
short var_19 = (short)-23476;
int var_20 = -1237021771;
void init() {
}

void checksum() {
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
