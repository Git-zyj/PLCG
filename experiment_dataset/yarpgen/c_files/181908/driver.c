#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_0 = (signed char)69;
unsigned long long int var_2 = 3919689545582537116ULL;
unsigned long long int var_3 = 5321606135917938961ULL;
signed char var_5 = (signed char)-31;
_Bool var_6 = (_Bool)0;
signed char var_7 = (signed char)-40;
short var_9 = (short)-24967;
long long int var_12 = 8495630228896499971LL;
unsigned short var_14 = (unsigned short)46728;
unsigned char var_15 = (unsigned char)128;
int zero = 0;
unsigned long long int var_17 = 10449712172244934331ULL;
short var_18 = (short)-28060;
long long int var_19 = 8588287364798418090LL;
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
