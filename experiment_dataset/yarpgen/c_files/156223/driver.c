#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_2 = (unsigned short)719;
unsigned char var_3 = (unsigned char)78;
long long int var_7 = 9101778319937723312LL;
int zero = 0;
long long int var_12 = -1824857282047305589LL;
int var_13 = 1237563042;
signed char var_14 = (signed char)115;
signed char var_15 = (signed char)60;
void init() {
}

void checksum() {
    hash(&seed, var_12);
    hash(&seed, var_13);
    hash(&seed, var_14);
    hash(&seed, var_15);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
