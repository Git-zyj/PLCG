#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_2 = 8506990766284526617ULL;
long long int var_4 = 8306104368757948014LL;
int var_5 = 701660924;
unsigned long long int var_15 = 1275422409085351199ULL;
int zero = 0;
unsigned short var_20 = (unsigned short)45198;
unsigned long long int var_21 = 652773603276598004ULL;
void init() {
}

void checksum() {
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
