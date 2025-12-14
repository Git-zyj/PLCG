#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_0 = 623051208U;
unsigned int var_2 = 2769097984U;
unsigned int var_13 = 2823044001U;
int zero = 0;
unsigned char var_14 = (unsigned char)182;
long long int var_15 = 6196091182330461107LL;
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
