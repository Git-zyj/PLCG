#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_0 = (unsigned char)206;
unsigned char var_3 = (unsigned char)169;
unsigned int var_5 = 1322884545U;
long long int var_6 = 5518215018125271440LL;
unsigned int var_7 = 967852742U;
signed char var_8 = (signed char)124;
unsigned short var_9 = (unsigned short)9706;
_Bool var_10 = (_Bool)1;
int zero = 0;
unsigned int var_13 = 2335450817U;
short var_14 = (short)-28536;
long long int var_15 = 5395932459103066505LL;
unsigned char var_16 = (unsigned char)70;
void init() {
}

void checksum() {
    hash(&seed, var_13);
    hash(&seed, var_14);
    hash(&seed, var_15);
    hash(&seed, var_16);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
