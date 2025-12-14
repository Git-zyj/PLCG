#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_6 = 1337818486U;
unsigned short var_7 = (unsigned short)88;
signed char var_8 = (signed char)-5;
_Bool var_13 = (_Bool)0;
int zero = 0;
unsigned long long int var_19 = 4076789562310503675ULL;
signed char var_20 = (signed char)98;
_Bool var_21 = (_Bool)0;
void init() {
}

void checksum() {
    hash(&seed, var_19);
    hash(&seed, var_20);
    hash(&seed, var_21);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
