#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_4 = (short)8147;
short var_5 = (short)2090;
unsigned short var_6 = (unsigned short)60305;
unsigned char var_7 = (unsigned char)253;
long long int var_10 = -4724731146918042862LL;
signed char var_13 = (signed char)94;
int zero = 0;
signed char var_14 = (signed char)-85;
unsigned long long int var_15 = 15034388142635607933ULL;
unsigned long long int var_16 = 12789180116593717519ULL;
void init() {
}

void checksum() {
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
