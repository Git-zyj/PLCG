#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_0 = (short)27707;
unsigned int var_1 = 2418593534U;
long long int var_3 = -5131951644414863780LL;
long long int var_4 = -5898106178019140092LL;
long long int var_5 = -3113657543054715766LL;
unsigned char var_6 = (unsigned char)121;
_Bool var_7 = (_Bool)1;
signed char var_9 = (signed char)107;
unsigned short var_11 = (unsigned short)64450;
long long int var_12 = -1610437324366109981LL;
unsigned char var_13 = (unsigned char)158;
unsigned char var_14 = (unsigned char)33;
int zero = 0;
unsigned int var_17 = 4082420573U;
unsigned int var_18 = 1196859534U;
void init() {
}

void checksum() {
    hash(&seed, var_17);
    hash(&seed, var_18);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
