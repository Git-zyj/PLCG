#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_1 = (unsigned short)31902;
int var_3 = -1967351254;
_Bool var_9 = (_Bool)0;
int zero = 0;
long long int var_10 = 2503369605980894174LL;
long long int var_11 = 3957441766585055066LL;
unsigned char var_12 = (unsigned char)248;
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
