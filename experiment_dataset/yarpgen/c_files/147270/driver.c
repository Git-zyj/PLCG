#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_0 = (signed char)100;
int var_1 = 1226494463;
long long int var_5 = 5617767540103463772LL;
unsigned char var_9 = (unsigned char)108;
unsigned short var_12 = (unsigned short)15112;
long long int var_13 = -4437198542545572046LL;
unsigned char var_15 = (unsigned char)170;
int zero = 0;
unsigned long long int var_18 = 11852412106384400533ULL;
unsigned char var_19 = (unsigned char)248;
unsigned long long int var_20 = 4609832392999798940ULL;
void init() {
}

void checksum() {
    hash(&seed, var_18);
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
