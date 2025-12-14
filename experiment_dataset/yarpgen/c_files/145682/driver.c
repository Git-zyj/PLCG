#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_0 = 8676671370175916621ULL;
unsigned short var_1 = (unsigned short)29319;
unsigned long long int var_2 = 9640617215248277744ULL;
unsigned short var_4 = (unsigned short)48476;
unsigned short var_5 = (unsigned short)43702;
int var_6 = -1713745674;
long long int var_7 = -1373189709319197975LL;
long long int var_10 = -2973308736747654080LL;
unsigned short var_11 = (unsigned short)21779;
signed char var_12 = (signed char)65;
int zero = 0;
unsigned char var_15 = (unsigned char)4;
unsigned short var_16 = (unsigned short)10790;
unsigned long long int var_17 = 9663742079399974608ULL;
int var_18 = 198472915;
void init() {
}

void checksum() {
    hash(&seed, var_15);
    hash(&seed, var_16);
    hash(&seed, var_17);
    hash(&seed, var_18);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
