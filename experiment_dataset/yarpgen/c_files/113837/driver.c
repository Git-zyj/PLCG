#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_0 = (short)-5733;
int var_1 = -2132754710;
unsigned short var_2 = (unsigned short)61211;
signed char var_4 = (signed char)-4;
unsigned long long int var_5 = 4829183468431902385ULL;
_Bool var_6 = (_Bool)1;
signed char var_7 = (signed char)-18;
_Bool var_9 = (_Bool)1;
signed char var_10 = (signed char)-59;
unsigned long long int var_11 = 14385347206561899084ULL;
signed char var_12 = (signed char)-120;
int zero = 0;
signed char var_13 = (signed char)50;
int var_14 = -1586088419;
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
