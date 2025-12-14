#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_0 = 3342934363U;
_Bool var_1 = (_Bool)0;
long long int var_2 = 8572809126856342173LL;
short var_4 = (short)-16821;
long long int var_5 = -5268371854135941281LL;
_Bool var_7 = (_Bool)1;
unsigned long long int var_8 = 9634979765329549236ULL;
unsigned long long int var_9 = 6711659727256609008ULL;
long long int var_10 = 8134511550596256181LL;
unsigned long long int var_11 = 16849423701316688639ULL;
short var_12 = (short)-26915;
int zero = 0;
unsigned short var_13 = (unsigned short)21441;
short var_14 = (short)-16700;
unsigned int var_15 = 1449837608U;
_Bool var_16 = (_Bool)0;
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
