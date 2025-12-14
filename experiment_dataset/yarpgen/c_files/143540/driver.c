#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_0 = (signed char)97;
_Bool var_9 = (_Bool)0;
int var_15 = -845773939;
long long int var_17 = 5391946601261470277LL;
int zero = 0;
signed char var_18 = (signed char)-45;
unsigned int var_19 = 782967979U;
void init() {
}

void checksum() {
    hash(&seed, var_18);
    hash(&seed, var_19);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
