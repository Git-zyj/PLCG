#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_0 = (unsigned char)158;
signed char var_3 = (signed char)30;
unsigned int var_4 = 2253217749U;
signed char var_5 = (signed char)-64;
long long int var_8 = -3965463690925311353LL;
unsigned short var_9 = (unsigned short)49897;
int var_11 = -1322851058;
int zero = 0;
unsigned char var_13 = (unsigned char)28;
unsigned short var_14 = (unsigned short)16420;
void init() {
}

void checksum() {
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
