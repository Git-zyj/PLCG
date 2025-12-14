#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_10 = 2984726537900875089LL;
unsigned long long int var_16 = 14003684234344914962ULL;
int zero = 0;
_Bool var_17 = (_Bool)1;
unsigned long long int var_18 = 4196574046114254359ULL;
void init() {
}

void checksum() {
    hash(&seed, var_17);
    hash(&seed, var_18);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
