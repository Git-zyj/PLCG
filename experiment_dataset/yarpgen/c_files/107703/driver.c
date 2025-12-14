#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_0 = (unsigned char)13;
int var_1 = 1200137932;
unsigned int var_2 = 2161800380U;
long long int var_3 = -609046949081209408LL;
unsigned long long int var_6 = 14199111758566233782ULL;
unsigned short var_7 = (unsigned short)30358;
unsigned short var_8 = (unsigned short)1715;
long long int var_9 = 3165304293384284108LL;
signed char var_10 = (signed char)-26;
long long int var_11 = 7209574509650980679LL;
unsigned short var_13 = (unsigned short)36053;
unsigned short var_16 = (unsigned short)31593;
int zero = 0;
long long int var_17 = -7743218519586222234LL;
int var_18 = 271121947;
unsigned char var_19 = (unsigned char)27;
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
