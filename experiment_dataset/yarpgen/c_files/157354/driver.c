#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_2 = (signed char)-112;
long long int var_9 = -4757758993313798507LL;
unsigned int var_13 = 3124178705U;
int zero = 0;
signed char var_17 = (signed char)-89;
unsigned int var_18 = 1213948411U;
signed char var_19 = (signed char)-67;
void init() {
}

void checksum() {
    hash(&seed, var_17);
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
