#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_1 = (unsigned short)12716;
unsigned short var_5 = (unsigned short)32890;
long long int var_6 = -8270436081934591958LL;
_Bool var_9 = (_Bool)0;
int zero = 0;
unsigned long long int var_10 = 6588849134873577324ULL;
unsigned long long int var_11 = 11657025764940994751ULL;
unsigned short var_12 = (unsigned short)52310;
void init() {
}

void checksum() {
    hash(&seed, var_10);
    hash(&seed, var_11);
    hash(&seed, var_12);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
