#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_3 = (signed char)-42;
unsigned long long int var_9 = 16721851517262979031ULL;
int var_15 = 2081661136;
int zero = 0;
unsigned int var_18 = 4113018117U;
_Bool var_19 = (_Bool)1;
unsigned long long int var_20 = 3698996831313121535ULL;
unsigned int var_21 = 2328992945U;
void init() {
}

void checksum() {
    hash(&seed, var_18);
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
