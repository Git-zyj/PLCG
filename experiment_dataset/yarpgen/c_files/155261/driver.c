#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

_Bool var_1 = (_Bool)0;
short var_2 = (short)-22547;
unsigned short var_3 = (unsigned short)34362;
unsigned int var_5 = 4047147719U;
signed char var_8 = (signed char)61;
signed char var_9 = (signed char)-5;
int zero = 0;
int var_10 = 353325627;
long long int var_11 = -4642214948063380416LL;
long long int var_12 = -6326814785403139354LL;
signed char var_13 = (signed char)-86;
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
