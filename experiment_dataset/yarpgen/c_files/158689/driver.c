#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_0 = (short)3057;
_Bool var_2 = (_Bool)0;
long long int var_3 = 6852529842720350667LL;
short var_4 = (short)26025;
unsigned char var_6 = (unsigned char)81;
short var_7 = (short)7960;
long long int var_9 = -631725313663310526LL;
unsigned char var_11 = (unsigned char)37;
long long int var_15 = -7852222741975923990LL;
int zero = 0;
_Bool var_18 = (_Bool)1;
int var_19 = 1122672909;
unsigned char var_20 = (unsigned char)10;
signed char var_21 = (signed char)54;
unsigned char var_22 = (unsigned char)193;
void init() {
}

void checksum() {
    hash(&seed, var_18);
    hash(&seed, var_19);
    hash(&seed, var_20);
    hash(&seed, var_21);
    hash(&seed, var_22);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
