#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

_Bool var_5 = (_Bool)1;
_Bool var_9 = (_Bool)0;
unsigned int var_12 = 3741336691U;
unsigned short var_15 = (unsigned short)52696;
int zero = 0;
unsigned long long int var_17 = 8622217051311183796ULL;
unsigned long long int var_18 = 1125867103878637460ULL;
unsigned int var_19 = 84162916U;
signed char var_20 = (signed char)-48;
void init() {
}

void checksum() {
    hash(&seed, var_17);
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
