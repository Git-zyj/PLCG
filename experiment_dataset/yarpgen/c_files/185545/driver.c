#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_0 = 17806977380640806017ULL;
int var_1 = 1927747829;
unsigned long long int var_8 = 9315940594655495956ULL;
short var_9 = (short)23612;
unsigned short var_10 = (unsigned short)16665;
unsigned char var_12 = (unsigned char)136;
int zero = 0;
long long int var_18 = 4983729971754246027LL;
unsigned long long int var_19 = 7569594694863069966ULL;
void init() {
}

void checksum() {
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
