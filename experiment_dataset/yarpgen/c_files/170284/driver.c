#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_0 = (unsigned char)87;
unsigned char var_1 = (unsigned char)13;
int var_2 = 1602584250;
unsigned char var_4 = (unsigned char)117;
int var_5 = -1065182322;
long long int var_6 = -503693841710602501LL;
_Bool var_9 = (_Bool)1;
_Bool var_10 = (_Bool)0;
int zero = 0;
unsigned int var_11 = 2851460181U;
unsigned long long int var_12 = 8100835722998193321ULL;
unsigned char var_13 = (unsigned char)236;
void init() {
}

void checksum() {
    hash(&seed, var_11);
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
