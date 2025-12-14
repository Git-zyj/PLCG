#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_2 = 3669490911U;
unsigned long long int var_4 = 14535630066118180406ULL;
unsigned short var_7 = (unsigned short)4289;
unsigned long long int var_8 = 12996494634326524332ULL;
long long int var_9 = -4293329598667587462LL;
unsigned long long int var_11 = 17127594684396384330ULL;
int zero = 0;
unsigned long long int var_14 = 14727832109353661456ULL;
unsigned int var_15 = 1102958753U;
unsigned char var_16 = (unsigned char)13;
int var_17 = 2017655987;
unsigned short var_18 = (unsigned short)60452;
void init() {
}

void checksum() {
    hash(&seed, var_14);
    hash(&seed, var_15);
    hash(&seed, var_16);
    hash(&seed, var_17);
    hash(&seed, var_18);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
