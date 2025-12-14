#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_0 = 2340956231U;
unsigned char var_1 = (unsigned char)51;
long long int var_5 = 119059908529427251LL;
_Bool var_9 = (_Bool)1;
int zero = 0;
signed char var_12 = (signed char)-101;
unsigned long long int var_13 = 2617495002795434647ULL;
void init() {
}

void checksum() {
    hash(&seed, var_12);
    hash(&seed, var_13);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
