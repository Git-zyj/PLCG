#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_0 = 8844041800921408255LL;
unsigned long long int var_8 = 13845587021039760350ULL;
signed char var_12 = (signed char)-97;
unsigned short var_15 = (unsigned short)41000;
unsigned int var_16 = 2486947616U;
int zero = 0;
unsigned long long int var_17 = 5158200420341958230ULL;
signed char var_18 = (signed char)-57;
void init() {
}

void checksum() {
    hash(&seed, var_17);
    hash(&seed, var_18);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
