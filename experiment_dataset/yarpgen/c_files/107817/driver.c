#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_0 = 6764382968435834044LL;
unsigned short var_2 = (unsigned short)54698;
long long int var_3 = -1269869035524072941LL;
unsigned short var_9 = (unsigned short)30552;
int zero = 0;
int var_10 = -1125825981;
_Bool var_11 = (_Bool)1;
void init() {
}

void checksum() {
    hash(&seed, var_10);
    hash(&seed, var_11);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
