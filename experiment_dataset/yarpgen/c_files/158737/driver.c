#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_0 = 1825491217;
unsigned short var_1 = (unsigned short)14359;
short var_6 = (short)-29182;
unsigned long long int var_7 = 18335127270747775631ULL;
unsigned long long int var_8 = 5406341442744623086ULL;
unsigned long long int var_9 = 17658236833380865661ULL;
unsigned int var_10 = 3394647877U;
unsigned int var_13 = 3266695976U;
int zero = 0;
_Bool var_14 = (_Bool)1;
unsigned long long int var_15 = 4100766748245737631ULL;
void init() {
}

void checksum() {
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
