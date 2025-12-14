#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_0 = (unsigned short)54512;
_Bool var_1 = (_Bool)0;
int var_6 = -168916632;
_Bool var_7 = (_Bool)0;
signed char var_8 = (signed char)-73;
int var_10 = 2134917408;
signed char var_11 = (signed char)-49;
_Bool var_13 = (_Bool)0;
long long int var_14 = 8164064816006758853LL;
int zero = 0;
unsigned long long int var_17 = 1759550280500512812ULL;
short var_18 = (short)-24572;
unsigned short var_19 = (unsigned short)35967;
int var_20 = -824066425;
void init() {
}

void checksum() {
    hash(&seed, var_17);
    hash(&seed, var_18);
    hash(&seed, var_19);
    hash(&seed, var_20);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
