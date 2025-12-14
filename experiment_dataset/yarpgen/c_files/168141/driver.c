#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_0 = (unsigned char)173;
unsigned short var_1 = (unsigned short)10934;
int var_3 = 531349919;
long long int var_6 = -574545130934798465LL;
long long int var_7 = 1939928387064593356LL;
unsigned char var_9 = (unsigned char)96;
unsigned char var_10 = (unsigned char)96;
long long int var_12 = 7895261987277778996LL;
long long int var_13 = -7403199498668128711LL;
int zero = 0;
int var_14 = 1591476083;
signed char var_15 = (signed char)-65;
unsigned long long int var_16 = 16706818800169954886ULL;
unsigned char var_17 = (unsigned char)57;
long long int var_18 = 6662493410122988698LL;
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
