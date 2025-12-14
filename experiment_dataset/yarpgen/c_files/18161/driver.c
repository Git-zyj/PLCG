#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_0 = 4091714334523006634LL;
long long int var_1 = -3697507181805772198LL;
unsigned char var_4 = (unsigned char)165;
unsigned long long int var_5 = 14333376743886058104ULL;
signed char var_10 = (signed char)45;
unsigned char var_11 = (unsigned char)177;
int zero = 0;
int var_19 = -341761603;
int var_20 = 1787695626;
void init() {
}

void checksum() {
    hash(&seed, var_19);
    hash(&seed, var_20);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
