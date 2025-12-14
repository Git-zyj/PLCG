#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_1 = 6119781681506488827ULL;
signed char var_2 = (signed char)65;
signed char var_3 = (signed char)16;
unsigned int var_4 = 2939939861U;
signed char var_5 = (signed char)-23;
unsigned int var_6 = 3749172531U;
signed char var_9 = (signed char)20;
signed char var_11 = (signed char)-26;
int zero = 0;
signed char var_12 = (signed char)-59;
unsigned int var_13 = 3395079689U;
void init() {
}

void checksum() {
    hash(&seed, var_12);
    hash(&seed, var_13);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
