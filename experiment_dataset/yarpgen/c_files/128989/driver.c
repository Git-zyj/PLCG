#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_0 = (signed char)34;
unsigned short var_4 = (unsigned short)15684;
int zero = 0;
unsigned char var_11 = (unsigned char)169;
long long int var_12 = 3228437656652438387LL;
unsigned int var_13 = 3929413339U;
unsigned short var_14 = (unsigned short)12447;
void init() {
}

void checksum() {
    hash(&seed, var_11);
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
