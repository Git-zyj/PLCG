#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_0 = (unsigned short)28458;
unsigned short var_1 = (unsigned short)42815;
unsigned long long int var_2 = 11407857558622104211ULL;
unsigned long long int var_10 = 1584005085087786902ULL;
unsigned short var_13 = (unsigned short)26655;
int zero = 0;
int var_16 = 1485453580;
long long int var_17 = 2989007030591134267LL;
void init() {
}

void checksum() {
    hash(&seed, var_16);
    hash(&seed, var_17);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
