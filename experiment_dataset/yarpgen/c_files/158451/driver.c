#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_0 = (short)-2390;
long long int var_2 = -2338545645545916690LL;
unsigned long long int var_3 = 1843592047722398315ULL;
signed char var_5 = (signed char)-119;
long long int var_6 = -7193415852417718562LL;
unsigned long long int var_7 = 3174193724384630929ULL;
long long int var_8 = -955630473500916962LL;
unsigned long long int var_10 = 12422860916995488045ULL;
int zero = 0;
short var_12 = (short)-20511;
unsigned short var_13 = (unsigned short)61739;
unsigned short var_14 = (unsigned short)40212;
unsigned int var_15 = 1583891977U;
unsigned char var_16 = (unsigned char)73;
void init() {
}

void checksum() {
    hash(&seed, var_12);
    hash(&seed, var_13);
    hash(&seed, var_14);
    hash(&seed, var_15);
    hash(&seed, var_16);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
