#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_0 = (unsigned short)23138;
unsigned int var_1 = 1548260009U;
int var_9 = 1494333425;
signed char var_10 = (signed char)126;
int zero = 0;
unsigned short var_11 = (unsigned short)42909;
signed char var_12 = (signed char)34;
signed char var_13 = (signed char)61;
unsigned short var_14 = (unsigned short)59608;
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
