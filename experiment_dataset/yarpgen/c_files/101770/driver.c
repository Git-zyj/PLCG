#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_5 = 3811282708U;
signed char var_8 = (signed char)-37;
int zero = 0;
unsigned short var_14 = (unsigned short)17215;
unsigned long long int var_15 = 8336043675323718384ULL;
unsigned short var_16 = (unsigned short)38479;
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
