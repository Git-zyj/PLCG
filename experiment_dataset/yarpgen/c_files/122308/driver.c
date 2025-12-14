#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_0 = (signed char)16;
unsigned short var_1 = (unsigned short)46008;
signed char var_2 = (signed char)-20;
unsigned long long int var_7 = 7614182490725612337ULL;
signed char var_10 = (signed char)39;
unsigned int var_12 = 324093961U;
signed char var_13 = (signed char)103;
int zero = 0;
_Bool var_14 = (_Bool)0;
_Bool var_15 = (_Bool)0;
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
