#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_0 = -1011600977;
long long int var_1 = 3697590296781424790LL;
long long int var_4 = -5388854350595951213LL;
_Bool var_11 = (_Bool)1;
int zero = 0;
signed char var_16 = (signed char)54;
unsigned int var_17 = 2377596452U;
unsigned char var_18 = (unsigned char)58;
void init() {
}

void checksum() {
    hash(&seed, var_16);
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
