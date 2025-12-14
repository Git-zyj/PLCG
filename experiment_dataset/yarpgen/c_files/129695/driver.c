#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_0 = (unsigned char)171;
short var_2 = (short)-24875;
signed char var_3 = (signed char)27;
long long int var_4 = -7842157822730863021LL;
long long int var_5 = -6371531247234770975LL;
signed char var_6 = (signed char)70;
unsigned long long int var_7 = 1439260829451945972ULL;
long long int var_9 = -9161719653760053132LL;
int zero = 0;
long long int var_12 = 6446645257609411786LL;
short var_13 = (short)27588;
int var_14 = -222899983;
unsigned char var_15 = (unsigned char)3;
int var_16 = 847566332;
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
