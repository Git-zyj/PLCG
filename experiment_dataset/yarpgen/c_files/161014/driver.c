#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

_Bool var_0 = (_Bool)1;
unsigned char var_1 = (unsigned char)27;
long long int var_2 = 2360075598851825675LL;
_Bool var_5 = (_Bool)0;
long long int var_7 = 1475580192726412278LL;
signed char var_9 = (signed char)70;
short var_10 = (short)29973;
signed char var_13 = (signed char)-54;
_Bool var_16 = (_Bool)0;
signed char var_17 = (signed char)41;
int zero = 0;
unsigned short var_19 = (unsigned short)49657;
unsigned char var_20 = (unsigned char)51;
unsigned short var_21 = (unsigned short)41076;
_Bool var_22 = (_Bool)0;
void init() {
}

void checksum() {
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
