#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_0 = (signed char)70;
signed char var_1 = (signed char)75;
unsigned long long int var_2 = 2586750207329583222ULL;
unsigned char var_4 = (unsigned char)91;
unsigned long long int var_5 = 10454878065043943099ULL;
int zero = 0;
unsigned char var_17 = (unsigned char)9;
int var_18 = -1912912208;
int var_19 = -693923894;
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
