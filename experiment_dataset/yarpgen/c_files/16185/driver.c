#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_0 = 11785384467279132872ULL;
long long int var_2 = -547011932501524074LL;
unsigned short var_9 = (unsigned short)63857;
unsigned long long int var_13 = 15616283130252609776ULL;
signed char var_17 = (signed char)-89;
int zero = 0;
unsigned long long int var_20 = 9468921281228707734ULL;
unsigned int var_21 = 518200398U;
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
