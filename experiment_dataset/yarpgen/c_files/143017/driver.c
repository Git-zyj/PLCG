#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_4 = (signed char)-53;
unsigned long long int var_6 = 8373999660445301769ULL;
signed char var_10 = (signed char)-108;
int zero = 0;
long long int var_12 = 1132155448559671302LL;
unsigned short var_13 = (unsigned short)54727;
void init() {
}

void checksum() {
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
