#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_0 = (unsigned char)233;
unsigned long long int var_6 = 12197980358955826356ULL;
long long int var_7 = 7310655429049259709LL;
_Bool var_15 = (_Bool)0;
int zero = 0;
int var_17 = -1841648897;
signed char var_18 = (signed char)-4;
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
