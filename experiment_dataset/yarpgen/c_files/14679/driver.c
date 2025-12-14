#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

_Bool var_1 = (_Bool)1;
unsigned short var_2 = (unsigned short)64974;
unsigned short var_3 = (unsigned short)5819;
long long int var_5 = -2487873960585232046LL;
long long int var_6 = -8802713328809416624LL;
long long int var_7 = 2016085480528591204LL;
unsigned short var_9 = (unsigned short)13817;
unsigned short var_10 = (unsigned short)53808;
unsigned int var_11 = 3251665654U;
unsigned short var_12 = (unsigned short)43484;
unsigned int var_13 = 471057187U;
short var_14 = (short)31807;
int zero = 0;
long long int var_16 = 5424682495110488387LL;
_Bool var_17 = (_Bool)1;
unsigned int var_18 = 2702779205U;
long long int var_19 = 5801822236650402789LL;
void init() {
}

void checksum() {
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
