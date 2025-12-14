#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_1 = (signed char)-3;
unsigned long long int var_3 = 5972252947004395500ULL;
unsigned long long int var_10 = 11482601598990191397ULL;
int zero = 0;
unsigned short var_13 = (unsigned short)50464;
unsigned short var_14 = (unsigned short)43534;
void init() {
}

void checksum() {
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
