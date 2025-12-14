#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_0 = (unsigned short)12953;
unsigned long long int var_3 = 5488032784046630500ULL;
int zero = 0;
long long int var_11 = 3552326588133299365LL;
unsigned short var_12 = (unsigned short)22826;
unsigned char var_13 = (unsigned char)153;
void init() {
}

void checksum() {
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
