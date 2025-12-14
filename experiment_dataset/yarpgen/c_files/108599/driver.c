#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_7 = 1327762424U;
unsigned int var_9 = 1737388459U;
unsigned short var_12 = (unsigned short)17904;
int zero = 0;
signed char var_14 = (signed char)-125;
long long int var_15 = 2930007768162913328LL;
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
