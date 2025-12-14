#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_5 = 11959314196643778529ULL;
signed char var_10 = (signed char)11;
signed char var_11 = (signed char)62;
int zero = 0;
unsigned short var_18 = (unsigned short)28150;
long long int var_19 = -9073332659155918866LL;
signed char var_20 = (signed char)-19;
unsigned short var_21 = (unsigned short)649;
void init() {
}

void checksum() {
    hash(&seed, var_18);
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
