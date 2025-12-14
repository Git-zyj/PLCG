#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_1 = 2511098181U;
long long int var_2 = -3500707695891466421LL;
signed char var_4 = (signed char)-123;
long long int var_5 = 1696051861100489159LL;
int var_6 = -1432163968;
signed char var_8 = (signed char)10;
unsigned int var_9 = 408765317U;
int zero = 0;
long long int var_10 = -8195470148010989215LL;
long long int var_11 = -589999783922788249LL;
long long int var_12 = 4415201623459207700LL;
long long int var_13 = 4601865862721714544LL;
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
