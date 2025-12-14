#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_6 = (signed char)-37;
unsigned long long int var_9 = 3958242883862541024ULL;
int zero = 0;
unsigned short var_11 = (unsigned short)47492;
unsigned int var_12 = 1893682303U;
signed char var_13 = (signed char)-78;
void init() {
}

void checksum() {
    hash(&seed, var_11);
    hash(&seed, var_12);
    hash(&seed, var_13);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
