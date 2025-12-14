#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_4 = (unsigned short)6423;
signed char var_5 = (signed char)-109;
long long int var_6 = 8085587806935041227LL;
int var_8 = -819538464;
signed char var_11 = (signed char)81;
int zero = 0;
unsigned long long int var_14 = 11740593585783699720ULL;
unsigned long long int var_15 = 15617777206358363364ULL;
long long int var_16 = 2033186895033733542LL;
long long int var_17 = -8972341793730528372LL;
void init() {
}

void checksum() {
    hash(&seed, var_14);
    hash(&seed, var_15);
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
