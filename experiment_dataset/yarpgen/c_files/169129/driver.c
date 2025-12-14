#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_0 = (unsigned short)55001;
unsigned char var_1 = (unsigned char)78;
_Bool var_2 = (_Bool)1;
int var_5 = 1166534955;
unsigned int var_9 = 3409728818U;
unsigned char var_13 = (unsigned char)143;
int zero = 0;
_Bool var_18 = (_Bool)1;
int var_19 = 678558989;
long long int var_20 = -5121170058685772598LL;
unsigned char var_21 = (unsigned char)217;
void init() {
}

void checksum() {
    hash(&seed, var_18);
    hash(&seed, var_19);
    hash(&seed, var_20);
    hash(&seed, var_21);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
