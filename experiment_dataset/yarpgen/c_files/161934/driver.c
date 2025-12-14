#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_5 = (unsigned char)63;
unsigned short var_7 = (unsigned short)29393;
int zero = 0;
unsigned long long int var_16 = 4610513833512802086ULL;
unsigned long long int var_17 = 4419445581335376182ULL;
signed char var_18 = (signed char)-118;
long long int var_19 = -8580828327830297497LL;
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
