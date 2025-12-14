#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_1 = (unsigned char)197;
int var_6 = 643688130;
signed char var_7 = (signed char)7;
unsigned int var_8 = 3053195112U;
unsigned long long int var_9 = 1977407174965706147ULL;
signed char var_16 = (signed char)-33;
int zero = 0;
unsigned char var_18 = (unsigned char)100;
long long int var_19 = 358418307994974187LL;
unsigned long long int var_20 = 16570747435195139306ULL;
void init() {
}

void checksum() {
    hash(&seed, var_18);
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
