#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_0 = (unsigned char)123;
unsigned char var_2 = (unsigned char)174;
int var_3 = -1935822085;
unsigned char var_4 = (unsigned char)208;
_Bool var_5 = (_Bool)0;
int var_7 = 873265460;
unsigned char var_11 = (unsigned char)6;
_Bool var_12 = (_Bool)0;
int var_14 = -2088938192;
int var_15 = -2016867304;
int zero = 0;
int var_16 = 1902767462;
int var_17 = 1472648325;
int var_18 = -1589773012;
_Bool var_19 = (_Bool)1;
unsigned char var_20 = (unsigned char)6;
void init() {
}

void checksum() {
    hash(&seed, var_16);
    hash(&seed, var_17);
    hash(&seed, var_18);
    hash(&seed, var_19);
    hash(&seed, var_20);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
