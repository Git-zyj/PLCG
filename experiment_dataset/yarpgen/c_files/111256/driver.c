#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_1 = (short)-30007;
unsigned char var_2 = (unsigned char)183;
long long int var_3 = -8677798310238134879LL;
_Bool var_4 = (_Bool)0;
int zero = 0;
unsigned char var_10 = (unsigned char)231;
long long int var_11 = -1833153143810960928LL;
unsigned short var_12 = (unsigned short)64258;
unsigned long long int var_13 = 9637971007138065807ULL;
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
