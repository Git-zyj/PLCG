#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_8 = 12137627058256869820ULL;
unsigned short var_10 = (unsigned short)19551;
long long int var_14 = 3505200918987994173LL;
unsigned short var_18 = (unsigned short)45926;
_Bool var_19 = (_Bool)0;
int zero = 0;
unsigned char var_20 = (unsigned char)76;
unsigned char var_21 = (unsigned char)190;
signed char var_22 = (signed char)8;
unsigned long long int var_23 = 9730217114218811591ULL;
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
