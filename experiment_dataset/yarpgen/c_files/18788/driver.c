#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_12 = -4473653637365641535LL;
unsigned long long int var_13 = 169740228761504307ULL;
signed char var_16 = (signed char)-9;
int zero = 0;
unsigned short var_17 = (unsigned short)52454;
unsigned long long int var_18 = 824000346655312122ULL;
void init() {
}

void checksum() {
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
