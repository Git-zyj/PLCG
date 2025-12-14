#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_1 = -1191697063;
int var_2 = -1056435049;
int var_4 = -818300229;
int var_5 = -1022188095;
unsigned int var_6 = 4133641075U;
int var_7 = 1454676863;
unsigned int var_8 = 2884122598U;
unsigned int var_9 = 222151039U;
int var_11 = 448846275;
unsigned int var_12 = 3103756626U;
unsigned int var_15 = 233470462U;
unsigned int var_16 = 1718461631U;
int var_17 = 885279857;
unsigned int var_18 = 2941013568U;
int zero = 0;
int var_19 = 1765694519;
unsigned int var_20 = 430936088U;
unsigned int var_21 = 2704317242U;
unsigned int var_22 = 472924029U;
void init() {
}

void checksum() {
    hash(&seed, var_19);
    hash(&seed, var_20);
    hash(&seed, var_21);
    hash(&seed, var_22);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
