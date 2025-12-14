#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_4 = 7243417525353780130LL;
unsigned short var_6 = (unsigned short)43522;
long long int var_7 = -6940689915255379852LL;
unsigned short var_11 = (unsigned short)21214;
unsigned short var_13 = (unsigned short)44204;
unsigned short var_15 = (unsigned short)53507;
unsigned int var_16 = 3273772268U;
signed char var_17 = (signed char)15;
int zero = 0;
unsigned int var_20 = 3656408690U;
_Bool var_21 = (_Bool)1;
void init() {
}

void checksum() {
    hash(&seed, var_20);
    hash(&seed, var_21);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
