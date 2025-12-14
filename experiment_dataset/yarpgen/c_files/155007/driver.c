#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_1 = 1726168563U;
long long int var_3 = 1326963944798734899LL;
short var_7 = (short)16109;
signed char var_10 = (signed char)-98;
long long int var_11 = 7844547615763368534LL;
short var_13 = (short)4887;
unsigned short var_15 = (unsigned short)17028;
unsigned short var_16 = (unsigned short)64302;
int zero = 0;
unsigned short var_18 = (unsigned short)44595;
unsigned short var_19 = (unsigned short)62249;
short var_20 = (short)23363;
unsigned short var_21 = (unsigned short)51114;
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
