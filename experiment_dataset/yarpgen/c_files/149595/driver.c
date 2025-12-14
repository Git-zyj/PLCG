#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_3 = (signed char)-85;
_Bool var_5 = (_Bool)0;
unsigned int var_14 = 32434054U;
int zero = 0;
unsigned long long int var_19 = 14027607275302282455ULL;
unsigned long long int var_20 = 13114299697907036682ULL;
unsigned long long int var_21 = 12097796087539283838ULL;
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
