#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_3 = 2407336678U;
unsigned long long int var_6 = 10594193934764541474ULL;
signed char var_7 = (signed char)57;
signed char var_9 = (signed char)7;
unsigned short var_16 = (unsigned short)61290;
long long int var_18 = -8570204519606532844LL;
int zero = 0;
unsigned int var_19 = 3012672282U;
_Bool var_20 = (_Bool)0;
void init() {
}

void checksum() {
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
