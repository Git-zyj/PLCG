#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_0 = 15213593157651096971ULL;
_Bool var_4 = (_Bool)0;
unsigned int var_6 = 3454522201U;
long long int var_7 = 5400235238785005197LL;
signed char var_8 = (signed char)39;
_Bool var_10 = (_Bool)0;
signed char var_12 = (signed char)-20;
unsigned short var_16 = (unsigned short)33272;
int zero = 0;
signed char var_20 = (signed char)-28;
short var_21 = (short)-11516;
void init() {
}

void checksum() {
    hash(&seed, var_20);
    hash(&seed, var_21);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
