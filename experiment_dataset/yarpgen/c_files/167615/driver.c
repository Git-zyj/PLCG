#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_1 = 4102351118U;
unsigned short var_4 = (unsigned short)64990;
long long int var_5 = 146072692524691100LL;
unsigned short var_8 = (unsigned short)61173;
unsigned long long int var_9 = 6042823699746096247ULL;
int zero = 0;
_Bool var_10 = (_Bool)1;
unsigned int var_11 = 570134079U;
signed char var_12 = (signed char)-14;
void init() {
}

void checksum() {
    hash(&seed, var_10);
    hash(&seed, var_11);
    hash(&seed, var_12);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
