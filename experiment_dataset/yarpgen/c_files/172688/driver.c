#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_3 = (signed char)98;
signed char var_8 = (signed char)65;
unsigned int var_9 = 522355742U;
unsigned long long int var_10 = 3068393616208379254ULL;
int zero = 0;
unsigned int var_15 = 75617533U;
int var_16 = -957469834;
long long int var_17 = -5473330262569916819LL;
unsigned int var_18 = 731517701U;
void init() {
}

void checksum() {
    hash(&seed, var_15);
    hash(&seed, var_16);
    hash(&seed, var_17);
    hash(&seed, var_18);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
