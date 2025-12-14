#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_0 = (short)-715;
_Bool var_1 = (_Bool)0;
unsigned char var_2 = (unsigned char)165;
long long int var_3 = -7738165873710543239LL;
_Bool var_5 = (_Bool)1;
unsigned long long int var_7 = 1327776197874750871ULL;
_Bool var_11 = (_Bool)0;
int var_12 = -1012934416;
unsigned long long int var_13 = 1244032176113435536ULL;
unsigned char var_16 = (unsigned char)16;
int zero = 0;
unsigned long long int var_17 = 17554422634699612088ULL;
unsigned int var_18 = 4292660095U;
unsigned char var_19 = (unsigned char)41;
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
