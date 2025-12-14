#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_3 = (unsigned char)2;
unsigned int var_4 = 2004810191U;
unsigned int var_5 = 1080329162U;
unsigned long long int var_9 = 3997431641845252620ULL;
long long int var_10 = -1647564017517255157LL;
unsigned long long int var_11 = 6738580639128678920ULL;
_Bool var_13 = (_Bool)1;
int zero = 0;
short var_19 = (short)20905;
signed char var_20 = (signed char)32;
signed char var_21 = (signed char)-85;
unsigned int var_22 = 2216156662U;
long long int var_23 = 2294576045420232829LL;
void init() {
}

void checksum() {
    hash(&seed, var_19);
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
