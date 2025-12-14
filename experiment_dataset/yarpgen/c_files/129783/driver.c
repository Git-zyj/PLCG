#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_2 = (short)11697;
signed char var_4 = (signed char)43;
_Bool var_5 = (_Bool)0;
long long int var_6 = -812200830151838146LL;
unsigned int var_7 = 1281616031U;
long long int var_8 = -1286585554960926862LL;
long long int var_9 = 3526235101702247839LL;
long long int var_10 = -6197731783032535695LL;
int zero = 0;
short var_11 = (short)-14425;
unsigned char var_12 = (unsigned char)24;
unsigned char var_13 = (unsigned char)203;
unsigned long long int var_14 = 7551588761958593041ULL;
void init() {
}

void checksum() {
    hash(&seed, var_11);
    hash(&seed, var_12);
    hash(&seed, var_13);
    hash(&seed, var_14);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
