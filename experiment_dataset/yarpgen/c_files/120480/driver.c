#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

_Bool var_0 = (_Bool)1;
unsigned int var_2 = 3054220330U;
_Bool var_3 = (_Bool)0;
unsigned long long int var_7 = 15388751111746043343ULL;
unsigned long long int var_8 = 6772647247775013829ULL;
signed char var_9 = (signed char)-98;
int zero = 0;
signed char var_12 = (signed char)74;
_Bool var_13 = (_Bool)0;
signed char var_14 = (signed char)119;
void init() {
}

void checksum() {
    hash(&seed, var_12);
    hash(&seed, var_13);
    hash(&seed, var_14);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
