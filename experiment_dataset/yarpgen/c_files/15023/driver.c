#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_1 = 6114124425024269351LL;
unsigned char var_14 = (unsigned char)100;
unsigned char var_15 = (unsigned char)98;
unsigned int var_16 = 2310789851U;
signed char var_18 = (signed char)-34;
int zero = 0;
short var_20 = (short)-12682;
long long int var_21 = 9196102246546653019LL;
unsigned char var_22 = (unsigned char)30;
signed char var_23 = (signed char)80;
signed char var_24 = (signed char)42;
void init() {
}

void checksum() {
    hash(&seed, var_20);
    hash(&seed, var_21);
    hash(&seed, var_22);
    hash(&seed, var_23);
    hash(&seed, var_24);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
