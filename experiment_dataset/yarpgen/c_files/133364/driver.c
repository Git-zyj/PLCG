#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_6 = (unsigned short)59400;
signed char var_10 = (signed char)-106;
int var_11 = 464984959;
long long int var_13 = 5716628943522201560LL;
int var_14 = 266161725;
int zero = 0;
unsigned long long int var_16 = 7063229582865369509ULL;
long long int var_17 = -275458829981008326LL;
unsigned char var_18 = (unsigned char)93;
unsigned long long int var_19 = 5145908736549888124ULL;
void init() {
}

void checksum() {
    hash(&seed, var_16);
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
