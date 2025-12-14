#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_0 = (signed char)-122;
unsigned int var_2 = 3015296331U;
signed char var_8 = (signed char)50;
unsigned long long int var_9 = 17620163353700313295ULL;
short var_10 = (short)-3867;
_Bool var_11 = (_Bool)0;
unsigned long long int var_14 = 1551975770670782004ULL;
int zero = 0;
_Bool var_16 = (_Bool)0;
unsigned int var_17 = 6418053U;
void init() {
}

void checksum() {
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
