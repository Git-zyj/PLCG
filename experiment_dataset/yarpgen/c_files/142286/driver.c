#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_0 = (unsigned short)7881;
unsigned short var_8 = (unsigned short)4100;
long long int var_9 = 5165676941841979455LL;
int zero = 0;
signed char var_10 = (signed char)67;
signed char var_11 = (signed char)95;
unsigned short var_12 = (unsigned short)16603;
signed char var_13 = (signed char)-40;
void init() {
}

void checksum() {
    hash(&seed, var_10);
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
