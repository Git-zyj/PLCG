#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_0 = -278192005242157987LL;
signed char var_3 = (signed char)28;
signed char var_5 = (signed char)75;
unsigned char var_6 = (unsigned char)196;
unsigned short var_7 = (unsigned short)31467;
int zero = 0;
signed char var_16 = (signed char)-48;
unsigned long long int var_17 = 10320642995495456994ULL;
signed char var_18 = (signed char)-52;
void init() {
}

void checksum() {
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
