#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

_Bool var_1 = (_Bool)0;
unsigned long long int var_2 = 7917827088320319687ULL;
unsigned int var_3 = 3165888209U;
unsigned char var_6 = (unsigned char)89;
unsigned long long int var_9 = 16857201151084998621ULL;
signed char var_14 = (signed char)125;
long long int var_16 = 994447258900347109LL;
int zero = 0;
unsigned char var_17 = (unsigned char)62;
short var_18 = (short)17643;
long long int var_19 = 3170363237257111890LL;
void init() {
}

void checksum() {
    hash(&seed, var_17);
    hash(&seed, var_18);
    hash(&seed, var_19);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
