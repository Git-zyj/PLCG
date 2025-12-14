#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_0 = (short)-29141;
_Bool var_3 = (_Bool)0;
signed char var_4 = (signed char)-35;
unsigned long long int var_5 = 17143609134272578134ULL;
unsigned int var_6 = 1162465181U;
unsigned char var_7 = (unsigned char)71;
unsigned long long int var_10 = 6476748783774687550ULL;
int zero = 0;
unsigned long long int var_12 = 9446120239488474020ULL;
unsigned long long int var_13 = 10350721322082339681ULL;
long long int var_14 = 5931322567573752247LL;
void init() {
}

void checksum() {
    hash(&seed, var_12);
    hash(&seed, var_13);
    hash(&seed, var_14);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
