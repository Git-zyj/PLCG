#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_0 = 7943387906484073038ULL;
_Bool var_6 = (_Bool)0;
long long int var_7 = -2873873471476378993LL;
unsigned short var_12 = (unsigned short)57296;
int zero = 0;
unsigned char var_14 = (unsigned char)4;
_Bool var_15 = (_Bool)0;
void init() {
}

void checksum() {
    hash(&seed, var_14);
    hash(&seed, var_15);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
