#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_9 = 854878067U;
int var_12 = -1461726964;
unsigned int var_15 = 1107485477U;
signed char var_16 = (signed char)-27;
short var_17 = (short)24163;
unsigned long long int var_19 = 14644346507975033359ULL;
int zero = 0;
unsigned char var_20 = (unsigned char)220;
long long int var_21 = 4962894348076455046LL;
unsigned int var_22 = 1715028608U;
void init() {
}

void checksum() {
    hash(&seed, var_20);
    hash(&seed, var_21);
    hash(&seed, var_22);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
