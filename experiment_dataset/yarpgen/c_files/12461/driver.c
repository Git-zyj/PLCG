#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_3 = 15159704800448049239ULL;
signed char var_4 = (signed char)-9;
unsigned int var_6 = 429042739U;
int zero = 0;
int var_15 = 1493367020;
unsigned short var_16 = (unsigned short)37994;
unsigned char var_17 = (unsigned char)150;
long long int var_18 = 2317909074683907992LL;
void init() {
}

void checksum() {
    hash(&seed, var_15);
    hash(&seed, var_16);
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
