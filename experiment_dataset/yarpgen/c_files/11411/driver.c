#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_0 = (short)2034;
unsigned char var_4 = (unsigned char)87;
_Bool var_5 = (_Bool)0;
long long int var_7 = 6896987591389381780LL;
short var_8 = (short)21769;
int zero = 0;
short var_10 = (short)-5975;
long long int var_11 = 7705336224119974397LL;
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
