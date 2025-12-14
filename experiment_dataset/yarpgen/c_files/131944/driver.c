#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_1 = -2056334753;
int var_3 = 1300914222;
unsigned char var_5 = (unsigned char)243;
int var_6 = -335421694;
int var_8 = 1660496973;
unsigned int var_10 = 2146066384U;
unsigned long long int var_11 = 6458667290291966873ULL;
int var_16 = -2099506740;
unsigned short var_17 = (unsigned short)51132;
unsigned short var_19 = (unsigned short)39457;
int zero = 0;
unsigned long long int var_20 = 3218482298580226762ULL;
int var_21 = 108285581;
unsigned short var_22 = (unsigned short)58546;
unsigned short var_23 = (unsigned short)62116;
void init() {
}

void checksum() {
    hash(&seed, var_20);
    hash(&seed, var_21);
    hash(&seed, var_22);
    hash(&seed, var_23);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
