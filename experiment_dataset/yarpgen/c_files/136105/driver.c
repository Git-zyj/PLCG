#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_0 = 10584062021632021881ULL;
unsigned long long int var_1 = 1066111890854769454ULL;
unsigned char var_4 = (unsigned char)89;
unsigned long long int var_5 = 777211729687520860ULL;
short var_7 = (short)23871;
unsigned long long int var_9 = 2165640917092739644ULL;
unsigned long long int var_10 = 253963878324723218ULL;
int zero = 0;
_Bool var_13 = (_Bool)1;
unsigned short var_14 = (unsigned short)43311;
unsigned long long int var_15 = 16551908683853876955ULL;
unsigned char var_16 = (unsigned char)235;
void init() {
}

void checksum() {
    hash(&seed, var_13);
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
