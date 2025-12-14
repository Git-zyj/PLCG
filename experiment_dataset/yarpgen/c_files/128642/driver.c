#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_0 = (signed char)127;
unsigned int var_1 = 4138940293U;
long long int var_3 = -7342189096098366711LL;
signed char var_5 = (signed char)53;
unsigned long long int var_6 = 4343932622438714720ULL;
short var_7 = (short)31633;
unsigned char var_8 = (unsigned char)149;
int zero = 0;
int var_10 = 694797052;
_Bool var_11 = (_Bool)0;
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
