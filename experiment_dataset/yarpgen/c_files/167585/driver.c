#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_0 = -3990784212109570420LL;
unsigned short var_3 = (unsigned short)53437;
_Bool var_4 = (_Bool)1;
long long int var_8 = 2120889612020972925LL;
short var_10 = (short)24782;
int zero = 0;
signed char var_12 = (signed char)112;
unsigned short var_13 = (unsigned short)61575;
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
