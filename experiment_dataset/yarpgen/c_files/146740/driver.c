#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_1 = -4532154051260317998LL;
signed char var_2 = (signed char)-2;
unsigned short var_3 = (unsigned short)29211;
long long int var_7 = -5820476622314895496LL;
long long int var_9 = -2155302368341067528LL;
int var_10 = -1431492314;
long long int var_12 = -1262792233673528201LL;
signed char var_13 = (signed char)90;
long long int var_14 = -7258426825490815900LL;
unsigned char var_15 = (unsigned char)63;
short var_16 = (short)15143;
int zero = 0;
long long int var_19 = 2985471363887099373LL;
unsigned char var_20 = (unsigned char)54;
short var_21 = (short)-15051;
void init() {
}

void checksum() {
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
