#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_0 = 16897480534717870719ULL;
unsigned long long int var_1 = 755885888957957406ULL;
unsigned short var_3 = (unsigned short)6275;
unsigned long long int var_4 = 5027292494847825275ULL;
signed char var_6 = (signed char)-20;
unsigned long long int var_7 = 12906202600261771618ULL;
short var_8 = (short)-6410;
signed char var_9 = (signed char)-111;
int zero = 0;
unsigned int var_10 = 290718199U;
unsigned int var_11 = 3379159937U;
unsigned int var_12 = 1575413228U;
void init() {
}

void checksum() {
    hash(&seed, var_10);
    hash(&seed, var_11);
    hash(&seed, var_12);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
