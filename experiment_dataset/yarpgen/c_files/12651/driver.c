#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_1 = 16203670365150294718ULL;
unsigned short var_9 = (unsigned short)8889;
unsigned long long int var_11 = 2456090321078741286ULL;
int var_19 = 692397345;
int zero = 0;
signed char var_20 = (signed char)-33;
unsigned long long int var_21 = 5412182226181343008ULL;
void init() {
}

void checksum() {
    hash(&seed, var_20);
    hash(&seed, var_21);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
