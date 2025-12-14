#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_1 = (short)-19545;
unsigned short var_7 = (unsigned short)46498;
_Bool var_8 = (_Bool)1;
unsigned long long int var_9 = 7686345212054783838ULL;
int zero = 0;
_Bool var_15 = (_Bool)1;
unsigned long long int var_16 = 17517018864102684857ULL;
void init() {
}

void checksum() {
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
