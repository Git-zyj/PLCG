#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_1 = (short)731;
_Bool var_2 = (_Bool)1;
_Bool var_3 = (_Bool)0;
int var_5 = 1311251655;
short var_6 = (short)4208;
int var_8 = 1465891419;
int var_9 = 1720579892;
long long int var_11 = 273937259907430740LL;
int zero = 0;
_Bool var_13 = (_Bool)1;
_Bool var_14 = (_Bool)0;
unsigned char var_15 = (unsigned char)15;
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
