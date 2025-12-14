#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_0 = (unsigned char)155;
signed char var_1 = (signed char)-36;
unsigned short var_7 = (unsigned short)49188;
signed char var_12 = (signed char)-80;
int zero = 0;
unsigned long long int var_18 = 5117173806623521739ULL;
int var_19 = -1732056113;
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
