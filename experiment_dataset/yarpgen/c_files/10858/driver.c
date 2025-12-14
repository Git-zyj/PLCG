#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_0 = (unsigned short)11106;
unsigned long long int var_7 = 12824644988162670750ULL;
unsigned short var_15 = (unsigned short)7545;
int zero = 0;
unsigned char var_17 = (unsigned char)92;
unsigned long long int var_18 = 16899548509537200696ULL;
signed char var_19 = (signed char)-17;
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
