#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_0 = -1507001101;
unsigned long long int var_1 = 738087638819666149ULL;
_Bool var_2 = (_Bool)1;
short var_3 = (short)-26806;
int var_5 = 750882446;
_Bool var_7 = (_Bool)0;
unsigned long long int var_8 = 3790926390743991625ULL;
signed char var_9 = (signed char)-104;
unsigned int var_10 = 4122289475U;
int zero = 0;
short var_11 = (short)-15877;
unsigned char var_12 = (unsigned char)28;
int var_13 = 883972526;
short var_14 = (short)23379;
void init() {
}

void checksum() {
    hash(&seed, var_11);
    hash(&seed, var_12);
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
