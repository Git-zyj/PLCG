#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_2 = 696716378U;
unsigned short var_3 = (unsigned short)38354;
long long int var_4 = 9113104926991166898LL;
_Bool var_7 = (_Bool)0;
signed char var_8 = (signed char)-72;
unsigned char var_9 = (unsigned char)208;
_Bool var_10 = (_Bool)0;
unsigned long long int var_11 = 6416346288379872565ULL;
unsigned char var_13 = (unsigned char)126;
unsigned short var_16 = (unsigned short)36663;
int zero = 0;
unsigned int var_17 = 3992411638U;
unsigned short var_18 = (unsigned short)8149;
unsigned char var_19 = (unsigned char)240;
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
