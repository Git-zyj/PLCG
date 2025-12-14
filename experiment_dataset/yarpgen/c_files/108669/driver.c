#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_2 = 7364134359424865510ULL;
long long int var_4 = 8712334870836253222LL;
int var_6 = -1241284280;
_Bool var_11 = (_Bool)1;
unsigned int var_17 = 1982764104U;
_Bool var_19 = (_Bool)1;
int zero = 0;
unsigned long long int var_20 = 6452496693592100873ULL;
unsigned char var_21 = (unsigned char)229;
void init() {
}

void checksum() {
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
