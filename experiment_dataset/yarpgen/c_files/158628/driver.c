#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_2 = 3440297663765258235LL;
unsigned long long int var_6 = 2227631328304306324ULL;
unsigned char var_7 = (unsigned char)110;
_Bool var_9 = (_Bool)1;
short var_14 = (short)-15210;
int var_15 = 891149114;
unsigned long long int var_16 = 130426033090982545ULL;
unsigned long long int var_19 = 4770865840423345091ULL;
int zero = 0;
unsigned long long int var_20 = 5364068489838536678ULL;
unsigned long long int var_21 = 29170888528249135ULL;
long long int var_22 = -8164964706742114901LL;
void init() {
}

void checksum() {
    hash(&seed, var_20);
    hash(&seed, var_21);
    hash(&seed, var_22);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
