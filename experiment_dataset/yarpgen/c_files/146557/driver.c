#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_0 = 1617846673972423955ULL;
signed char var_1 = (signed char)117;
unsigned long long int var_2 = 11255353710356360680ULL;
unsigned int var_3 = 3074137408U;
short var_4 = (short)10237;
unsigned short var_5 = (unsigned short)2279;
signed char var_6 = (signed char)-4;
int var_7 = -978990848;
short var_8 = (short)-9338;
unsigned short var_9 = (unsigned short)57125;
signed char var_11 = (signed char)-17;
int var_12 = -1608477577;
_Bool var_13 = (_Bool)1;
int zero = 0;
unsigned char var_14 = (unsigned char)107;
unsigned char var_15 = (unsigned char)74;
long long int var_16 = -7291026076272233749LL;
void init() {
}

void checksum() {
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
