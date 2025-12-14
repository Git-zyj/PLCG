#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_0 = 2051659516;
short var_1 = (short)10859;
short var_4 = (short)-1503;
_Bool var_5 = (_Bool)1;
unsigned char var_6 = (unsigned char)229;
unsigned long long int var_9 = 899700885296245758ULL;
unsigned short var_10 = (unsigned short)27799;
long long int var_11 = -3915932956655554377LL;
long long int var_12 = -1399704916684621709LL;
int zero = 0;
short var_15 = (short)-18914;
int var_16 = 1211003377;
_Bool var_17 = (_Bool)1;
_Bool var_18 = (_Bool)1;
unsigned long long int var_19 = 4514344628132368520ULL;
void init() {
}

void checksum() {
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
