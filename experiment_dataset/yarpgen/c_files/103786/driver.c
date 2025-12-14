#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_2 = 4444806156304381601LL;
short var_3 = (short)3205;
unsigned int var_4 = 4171459036U;
long long int var_6 = -6751057772269777580LL;
int var_7 = 818682184;
unsigned int var_8 = 3887387742U;
int zero = 0;
unsigned char var_10 = (unsigned char)81;
long long int var_11 = -852731855167140218LL;
int var_12 = -1354727864;
long long int var_13 = -1867652125410481098LL;
void init() {
}

void checksum() {
    hash(&seed, var_10);
    hash(&seed, var_11);
    hash(&seed, var_12);
    hash(&seed, var_13);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
