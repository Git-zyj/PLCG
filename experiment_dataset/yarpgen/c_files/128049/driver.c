#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_0 = 1004338673;
unsigned short var_2 = (unsigned short)53271;
unsigned long long int var_5 = 9157128952338678229ULL;
int var_6 = 957642205;
int var_7 = 350902188;
short var_10 = (short)-7242;
short var_11 = (short)-3404;
int zero = 0;
long long int var_17 = -5870506219130137888LL;
unsigned int var_18 = 3380676930U;
unsigned int var_19 = 2417651361U;
unsigned char var_20 = (unsigned char)133;
unsigned char var_21 = (unsigned char)236;
void init() {
}

void checksum() {
    hash(&seed, var_17);
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
