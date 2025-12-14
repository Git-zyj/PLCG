#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_0 = -5141544244419556376LL;
long long int var_5 = -6027701843300739253LL;
signed char var_6 = (signed char)-122;
unsigned char var_7 = (unsigned char)103;
int zero = 0;
_Bool var_11 = (_Bool)0;
long long int var_12 = 139450001628464094LL;
void init() {
}

void checksum() {
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
