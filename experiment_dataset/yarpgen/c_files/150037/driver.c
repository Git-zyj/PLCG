#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_1 = 7233561036153254471ULL;
unsigned long long int var_3 = 12908919042980595282ULL;
unsigned long long int var_7 = 7278457996228015864ULL;
signed char var_10 = (signed char)43;
_Bool var_11 = (_Bool)0;
signed char var_14 = (signed char)90;
unsigned int var_16 = 2113342744U;
int zero = 0;
short var_17 = (short)-6799;
unsigned char var_18 = (unsigned char)114;
unsigned long long int var_19 = 12530622839132609659ULL;
void init() {
}

void checksum() {
    hash(&seed, var_17);
    hash(&seed, var_18);
    hash(&seed, var_19);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
