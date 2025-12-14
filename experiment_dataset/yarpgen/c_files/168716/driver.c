#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_3 = (unsigned short)30559;
unsigned char var_5 = (unsigned char)89;
signed char var_7 = (signed char)109;
short var_8 = (short)-28575;
long long int var_10 = -6916315527591933684LL;
signed char var_11 = (signed char)-5;
unsigned long long int var_15 = 8045479084049894062ULL;
int zero = 0;
signed char var_16 = (signed char)-70;
int var_17 = 1518367290;
void init() {
}

void checksum() {
    hash(&seed, var_16);
    hash(&seed, var_17);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
