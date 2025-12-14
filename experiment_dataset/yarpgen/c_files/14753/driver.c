#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_1 = (signed char)27;
unsigned short var_2 = (unsigned short)22552;
unsigned short var_3 = (unsigned short)63719;
signed char var_4 = (signed char)-4;
signed char var_5 = (signed char)56;
long long int var_8 = 538953390930775037LL;
unsigned long long int var_10 = 10897258150911837453ULL;
unsigned char var_12 = (unsigned char)139;
unsigned char var_13 = (unsigned char)153;
int zero = 0;
unsigned char var_14 = (unsigned char)172;
unsigned long long int var_15 = 1939964072283804878ULL;
unsigned char var_16 = (unsigned char)151;
short var_17 = (short)-27982;
void init() {
}

void checksum() {
    hash(&seed, var_14);
    hash(&seed, var_15);
    hash(&seed, var_16);
    hash(&seed, var_17);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
