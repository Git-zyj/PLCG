#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_1 = 3973774641688017570ULL;
int var_2 = 1155939217;
int var_5 = 685180006;
int var_6 = 1281471642;
unsigned char var_10 = (unsigned char)180;
unsigned short var_11 = (unsigned short)12364;
int zero = 0;
short var_13 = (short)29857;
unsigned short var_14 = (unsigned short)58178;
long long int var_15 = -7512796285183651133LL;
signed char var_16 = (signed char)116;
void init() {
}

void checksum() {
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
