#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_1 = (signed char)-110;
signed char var_2 = (signed char)65;
short var_3 = (short)-6992;
long long int var_4 = 5963660877747565230LL;
signed char var_5 = (signed char)-55;
unsigned int var_8 = 3002114013U;
int zero = 0;
long long int var_13 = -2357592308241551630LL;
signed char var_14 = (signed char)4;
void init() {
}

void checksum() {
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
