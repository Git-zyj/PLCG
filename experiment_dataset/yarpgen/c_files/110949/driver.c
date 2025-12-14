#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_3 = (unsigned short)13219;
unsigned long long int var_5 = 7457847647284095596ULL;
signed char var_6 = (signed char)-57;
unsigned char var_7 = (unsigned char)93;
signed char var_8 = (signed char)-126;
int zero = 0;
unsigned short var_10 = (unsigned short)42586;
unsigned short var_11 = (unsigned short)46199;
void init() {
}

void checksum() {
    hash(&seed, var_10);
    hash(&seed, var_11);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
