#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_0 = (signed char)55;
int var_1 = -1393409222;
signed char var_3 = (signed char)-101;
long long int var_11 = 6395879517554341099LL;
int zero = 0;
long long int var_13 = 2089208956099429406LL;
unsigned short var_14 = (unsigned short)30247;
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
