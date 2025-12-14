#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_5 = (signed char)-64;
unsigned int var_6 = 2085915290U;
_Bool var_9 = (_Bool)0;
int zero = 0;
unsigned int var_19 = 2102425383U;
signed char var_20 = (signed char)4;
int var_21 = -2121449077;
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
