#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_2 = (signed char)82;
unsigned char var_3 = (unsigned char)95;
signed char var_4 = (signed char)97;
short var_7 = (short)-26881;
short var_8 = (short)-347;
unsigned long long int var_11 = 15638073212018690253ULL;
int zero = 0;
_Bool var_18 = (_Bool)1;
long long int var_19 = 6132046096257155381LL;
short var_20 = (short)-10755;
int var_21 = -172002832;
void init() {
}

void checksum() {
    hash(&seed, var_18);
    hash(&seed, var_19);
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
