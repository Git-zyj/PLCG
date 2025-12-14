#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_1 = (unsigned char)35;
_Bool var_3 = (_Bool)1;
long long int var_4 = -2245407232957302247LL;
unsigned char var_7 = (unsigned char)37;
int var_9 = 1905171083;
signed char var_10 = (signed char)121;
unsigned char var_12 = (unsigned char)79;
int zero = 0;
long long int var_13 = 4045745435824437634LL;
int var_14 = 1407458155;
unsigned short var_15 = (unsigned short)62210;
short var_16 = (short)28135;
signed char var_17 = (signed char)20;
unsigned int var_18 = 90781679U;
short var_19 = (short)-1577;
void init() {
}

void checksum() {
    hash(&seed, var_13);
    hash(&seed, var_14);
    hash(&seed, var_15);
    hash(&seed, var_16);
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
