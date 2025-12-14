#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_1 = 3979134001106039329ULL;
unsigned long long int var_3 = 14259654722697428217ULL;
unsigned int var_4 = 2923195830U;
unsigned int var_10 = 1083136095U;
signed char var_17 = (signed char)80;
int zero = 0;
unsigned int var_20 = 133428918U;
int var_21 = 773112661;
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
