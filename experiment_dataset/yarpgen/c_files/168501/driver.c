#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_1 = (short)-16032;
long long int var_2 = 5126022180243475542LL;
_Bool var_4 = (_Bool)0;
long long int var_5 = -3018406891709701359LL;
long long int var_6 = -1194196765451256688LL;
short var_7 = (short)17652;
signed char var_9 = (signed char)-73;
signed char var_10 = (signed char)78;
int zero = 0;
signed char var_11 = (signed char)72;
signed char var_12 = (signed char)8;
unsigned short var_13 = (unsigned short)54103;
void init() {
}

void checksum() {
    hash(&seed, var_11);
    hash(&seed, var_12);
    hash(&seed, var_13);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
