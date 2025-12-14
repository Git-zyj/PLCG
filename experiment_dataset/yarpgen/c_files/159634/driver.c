#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

_Bool var_1 = (_Bool)1;
signed char var_2 = (signed char)-78;
_Bool var_9 = (_Bool)1;
unsigned long long int var_10 = 3397241978682466751ULL;
int zero = 0;
signed char var_14 = (signed char)-65;
int var_15 = -1129769952;
_Bool var_16 = (_Bool)0;
unsigned short var_17 = (unsigned short)60407;
void init() {
}

void checksum() {
    hash(&seed, var_14);
    hash(&seed, var_15);
    hash(&seed, var_16);
    hash(&seed, var_17);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
