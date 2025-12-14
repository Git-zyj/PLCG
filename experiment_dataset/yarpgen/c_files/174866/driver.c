#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_9 = (signed char)-1;
unsigned long long int var_12 = 6096191203815537392ULL;
unsigned long long int var_13 = 9719864967812085234ULL;
int zero = 0;
unsigned long long int var_14 = 18208172257624653090ULL;
unsigned long long int var_15 = 13214059046321752736ULL;
signed char var_16 = (signed char)-78;
void init() {
}

void checksum() {
    hash(&seed, var_14);
    hash(&seed, var_15);
    hash(&seed, var_16);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
