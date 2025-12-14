#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_0 = 2051937206U;
unsigned short var_1 = (unsigned short)20083;
_Bool var_3 = (_Bool)0;
signed char var_11 = (signed char)-50;
unsigned long long int var_16 = 5463473242399164595ULL;
int zero = 0;
unsigned int var_18 = 3470681323U;
unsigned short var_19 = (unsigned short)6664;
unsigned int var_20 = 3182720820U;
void init() {
}

void checksum() {
    hash(&seed, var_18);
    hash(&seed, var_19);
    hash(&seed, var_20);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
