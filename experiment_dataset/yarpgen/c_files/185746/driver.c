#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_0 = 8457196266109312567ULL;
long long int var_2 = 4869300027044287806LL;
long long int var_6 = -2640103773041274226LL;
unsigned char var_10 = (unsigned char)64;
unsigned long long int var_11 = 7928427565187691204ULL;
int zero = 0;
unsigned char var_17 = (unsigned char)237;
long long int var_18 = -4802426992242634872LL;
_Bool var_19 = (_Bool)0;
_Bool var_20 = (_Bool)0;
unsigned char var_21 = (unsigned char)110;
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
