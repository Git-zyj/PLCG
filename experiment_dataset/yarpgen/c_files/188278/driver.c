#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_0 = -447620256;
signed char var_1 = (signed char)-104;
int var_3 = 702668706;
long long int var_4 = -8642324855978387670LL;
int var_7 = -1326986661;
int zero = 0;
int var_12 = 273292811;
int var_13 = 340513505;
void init() {
}

void checksum() {
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
