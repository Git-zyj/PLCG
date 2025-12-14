#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

_Bool var_1 = (_Bool)0;
unsigned short var_3 = (unsigned short)57905;
signed char var_4 = (signed char)66;
signed char var_6 = (signed char)-98;
long long int var_10 = 5751208122723154605LL;
int zero = 0;
_Bool var_14 = (_Bool)1;
signed char var_15 = (signed char)83;
unsigned long long int var_16 = 14463218872928211929ULL;
void init() {
}

void checksum() {
    hash(&seed, var_14);
    hash(&seed, var_15);
    hash(&seed, var_16);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
