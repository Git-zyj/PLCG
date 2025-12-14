#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_1 = (unsigned char)50;
unsigned char var_4 = (unsigned char)15;
int var_6 = 250845267;
int var_9 = -1999573590;
long long int var_11 = 1590772706484374606LL;
signed char var_13 = (signed char)63;
unsigned char var_19 = (unsigned char)118;
int zero = 0;
int var_20 = 154340798;
unsigned short var_21 = (unsigned short)25251;
unsigned long long int var_22 = 8756858517725659487ULL;
void init() {
}

void checksum() {
    hash(&seed, var_20);
    hash(&seed, var_21);
    hash(&seed, var_22);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
