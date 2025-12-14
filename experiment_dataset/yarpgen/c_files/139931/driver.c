#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_0 = (unsigned short)25325;
_Bool var_3 = (_Bool)0;
unsigned long long int var_5 = 16345366100526033131ULL;
_Bool var_6 = (_Bool)0;
signed char var_8 = (signed char)90;
int zero = 0;
unsigned int var_10 = 210687821U;
signed char var_11 = (signed char)81;
unsigned long long int var_12 = 5369070391141707533ULL;
void init() {
}

void checksum() {
    hash(&seed, var_10);
    hash(&seed, var_11);
    hash(&seed, var_12);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
