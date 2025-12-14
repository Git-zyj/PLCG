#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_1 = (signed char)10;
short var_2 = (short)-9665;
unsigned char var_3 = (unsigned char)163;
unsigned char var_7 = (unsigned char)202;
short var_8 = (short)-27250;
int var_10 = 1609229020;
short var_11 = (short)-27126;
unsigned char var_17 = (unsigned char)52;
unsigned short var_18 = (unsigned short)5507;
int zero = 0;
long long int var_20 = -4263985999280349640LL;
signed char var_21 = (signed char)90;
unsigned int var_22 = 1872580459U;
signed char var_23 = (signed char)-72;
short var_24 = (short)22930;
unsigned char var_25 = (unsigned char)229;
short var_26 = (short)-15494;
void init() {
}

void checksum() {
    hash(&seed, var_20);
    hash(&seed, var_21);
    hash(&seed, var_22);
    hash(&seed, var_23);
    hash(&seed, var_24);
    hash(&seed, var_25);
    hash(&seed, var_26);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
