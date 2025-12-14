#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_4 = (signed char)21;
unsigned short var_6 = (unsigned short)59198;
int var_8 = 1144827103;
short var_9 = (short)-13361;
unsigned long long int var_10 = 6105334921980878869ULL;
short var_11 = (short)18489;
unsigned long long int var_12 = 6575839463502163997ULL;
int zero = 0;
unsigned int var_13 = 290973763U;
unsigned long long int var_14 = 7991865693305349725ULL;
unsigned long long int var_15 = 9819341358363467892ULL;
void init() {
}

void checksum() {
    hash(&seed, var_13);
    hash(&seed, var_14);
    hash(&seed, var_15);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
