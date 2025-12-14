#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_2 = 518103365U;
unsigned int var_5 = 632206527U;
unsigned int var_7 = 3759032296U;
unsigned int var_13 = 1439457932U;
int zero = 0;
unsigned int var_14 = 689927113U;
unsigned int var_15 = 2959929636U;
void init() {
}

void checksum() {
    hash(&seed, var_14);
    hash(&seed, var_15);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
