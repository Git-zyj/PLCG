#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_1 = 1125681633164490965ULL;
unsigned long long int var_3 = 9853969721950100221ULL;
unsigned long long int var_4 = 524199483218881438ULL;
short var_6 = (short)-17851;
unsigned long long int var_10 = 15739165176036933661ULL;
unsigned long long int var_11 = 2361333850691204473ULL;
int zero = 0;
unsigned long long int var_12 = 13143026705717274180ULL;
unsigned long long int var_13 = 13119987450189055869ULL;
unsigned long long int var_14 = 9829417481280816559ULL;
short var_15 = (short)21666;
void init() {
}

void checksum() {
    hash(&seed, var_12);
    hash(&seed, var_13);
    hash(&seed, var_14);
    hash(&seed, var_15);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
