#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

_Bool var_2 = (_Bool)0;
unsigned long long int var_4 = 15438655320421885393ULL;
signed char var_6 = (signed char)111;
signed char var_7 = (signed char)-8;
_Bool var_9 = (_Bool)1;
int zero = 0;
unsigned int var_13 = 1196943136U;
unsigned short var_14 = (unsigned short)43097;
signed char var_15 = (signed char)117;
void init() {
}

void checksum() {
    hash(&seed, var_13);
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
