#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_1 = (unsigned short)41148;
unsigned char var_3 = (unsigned char)217;
signed char var_5 = (signed char)32;
_Bool var_6 = (_Bool)0;
unsigned short var_10 = (unsigned short)8813;
unsigned char var_11 = (unsigned char)19;
int zero = 0;
unsigned long long int var_12 = 13939847424527675060ULL;
_Bool var_13 = (_Bool)1;
unsigned long long int var_14 = 4982156829808526131ULL;
void init() {
}

void checksum() {
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
