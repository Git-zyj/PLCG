#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_1 = 2015136090;
unsigned char var_2 = (unsigned char)76;
long long int var_3 = 8237913095428704829LL;
unsigned char var_4 = (unsigned char)4;
long long int var_5 = 754906987216774584LL;
long long int var_6 = -2222981285301455486LL;
_Bool var_7 = (_Bool)1;
signed char var_9 = (signed char)66;
long long int var_12 = 4327973661126217962LL;
int zero = 0;
short var_13 = (short)16234;
long long int var_14 = 6622892423908148819LL;
unsigned char var_15 = (unsigned char)1;
int var_16 = -905137149;
void init() {
}

void checksum() {
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
