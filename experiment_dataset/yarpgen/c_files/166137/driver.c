#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_3 = 421016115U;
unsigned int var_5 = 1470564472U;
long long int var_8 = 1142594060574886392LL;
unsigned char var_9 = (unsigned char)98;
long long int var_11 = 3986084382036387892LL;
int zero = 0;
long long int var_12 = 7041253179316367844LL;
signed char var_13 = (signed char)56;
unsigned char var_14 = (unsigned char)180;
void init() {
}

void checksum() {
    hash(&seed, var_12);
    hash(&seed, var_13);
    hash(&seed, var_14);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
