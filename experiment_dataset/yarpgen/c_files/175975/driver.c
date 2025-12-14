#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_5 = 3384253178U;
_Bool var_7 = (_Bool)0;
signed char var_8 = (signed char)-1;
short var_9 = (short)-5978;
unsigned short var_13 = (unsigned short)39785;
int zero = 0;
unsigned int var_14 = 1314664130U;
_Bool var_15 = (_Bool)1;
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
