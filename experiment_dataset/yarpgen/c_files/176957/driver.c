#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_1 = (signed char)-41;
unsigned long long int var_2 = 17367589298312160552ULL;
unsigned int var_3 = 2416467464U;
_Bool var_4 = (_Bool)1;
unsigned int var_6 = 4171708529U;
unsigned long long int var_8 = 18349261265968519886ULL;
unsigned long long int var_9 = 11544315057616866532ULL;
long long int var_11 = -6008945714017720800LL;
int zero = 0;
long long int var_12 = 8060733479643536699LL;
unsigned int var_13 = 1598618806U;
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
