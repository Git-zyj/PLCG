#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_2 = (signed char)8;
long long int var_3 = 3753965112685378538LL;
int var_4 = -821427637;
int var_5 = -1614173939;
unsigned short var_6 = (unsigned short)49345;
unsigned char var_8 = (unsigned char)144;
long long int var_9 = 8119649651807221726LL;
int var_10 = -1404399003;
unsigned char var_11 = (unsigned char)1;
unsigned int var_17 = 1660547770U;
int zero = 0;
_Bool var_18 = (_Bool)0;
int var_19 = 1928366821;
unsigned short var_20 = (unsigned short)27309;
void init() {
}

void checksum() {
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
