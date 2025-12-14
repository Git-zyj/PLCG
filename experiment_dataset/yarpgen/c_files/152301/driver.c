#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_3 = (unsigned char)53;
unsigned short var_4 = (unsigned short)54530;
unsigned int var_5 = 704955349U;
unsigned char var_6 = (unsigned char)20;
short var_10 = (short)-21210;
int zero = 0;
unsigned long long int var_20 = 16526518042801709781ULL;
long long int var_21 = 1263599439781833356LL;
unsigned long long int var_22 = 13273021266978620433ULL;
short var_23 = (short)10538;
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
