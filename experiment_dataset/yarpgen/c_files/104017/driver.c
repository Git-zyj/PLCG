#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_2 = (unsigned short)19254;
long long int var_3 = -778517079012861188LL;
unsigned short var_4 = (unsigned short)9498;
long long int var_5 = 3500104401927187524LL;
long long int var_6 = 4009283511155462894LL;
long long int var_7 = -6750674334395300842LL;
int zero = 0;
int var_12 = -969712013;
unsigned long long int var_13 = 11464359093604170040ULL;
unsigned char var_14 = (unsigned char)68;
unsigned int var_15 = 1323211601U;
unsigned long long int var_16 = 6087945396684697900ULL;
void init() {
}

void checksum() {
    hash(&seed, var_12);
    hash(&seed, var_13);
    hash(&seed, var_14);
    hash(&seed, var_15);
    hash(&seed, var_16);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
