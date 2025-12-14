#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_0 = (unsigned char)246;
_Bool var_1 = (_Bool)0;
_Bool var_2 = (_Bool)0;
unsigned char var_3 = (unsigned char)229;
int var_4 = 838454942;
unsigned int var_5 = 2616397623U;
_Bool var_6 = (_Bool)1;
long long int var_7 = -4251969393101880817LL;
unsigned char var_8 = (unsigned char)81;
signed char var_9 = (signed char)-67;
long long int var_10 = -5487672766971118801LL;
short var_11 = (short)-20985;
unsigned char var_13 = (unsigned char)146;
int var_14 = -521132589;
_Bool var_15 = (_Bool)1;
int zero = 0;
int var_16 = -1226920433;
unsigned int var_17 = 743471561U;
short var_18 = (short)5926;
void init() {
}

void checksum() {
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
