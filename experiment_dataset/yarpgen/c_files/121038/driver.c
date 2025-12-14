#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_3 = 2371432833U;
long long int var_4 = -1231852891384905481LL;
unsigned char var_9 = (unsigned char)209;
unsigned short var_12 = (unsigned short)59698;
int zero = 0;
unsigned short var_13 = (unsigned short)41121;
signed char var_14 = (signed char)118;
void init() {
}

void checksum() {
    hash(&seed, var_13);
    hash(&seed, var_14);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
