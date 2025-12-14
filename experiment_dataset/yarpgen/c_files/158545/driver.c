#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_0 = 3692469295503346291ULL;
unsigned long long int var_2 = 1818951788413435304ULL;
unsigned char var_4 = (unsigned char)193;
unsigned char var_11 = (unsigned char)64;
unsigned char var_12 = (unsigned char)198;
unsigned short var_17 = (unsigned short)18583;
int zero = 0;
unsigned long long int var_19 = 7717731201442076034ULL;
signed char var_20 = (signed char)106;
unsigned char var_21 = (unsigned char)114;
void init() {
}

void checksum() {
    hash(&seed, var_19);
    hash(&seed, var_20);
    hash(&seed, var_21);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
