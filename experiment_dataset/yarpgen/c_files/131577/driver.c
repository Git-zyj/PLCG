#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_0 = (unsigned char)129;
unsigned int var_1 = 1292739842U;
int var_2 = 605738976;
long long int var_3 = 6939867450819186271LL;
_Bool var_4 = (_Bool)0;
unsigned long long int var_5 = 10501787975563122129ULL;
unsigned int var_6 = 1085539814U;
unsigned char var_7 = (unsigned char)123;
unsigned char var_8 = (unsigned char)95;
unsigned long long int var_9 = 1946869363996551046ULL;
_Bool var_10 = (_Bool)0;
unsigned int var_11 = 1838758390U;
signed char var_12 = (signed char)-122;
int var_13 = -1012695410;
_Bool var_14 = (_Bool)1;
_Bool var_15 = (_Bool)0;
int zero = 0;
unsigned short var_16 = (unsigned short)19102;
long long int var_17 = 6955426511278753037LL;
signed char var_18 = (signed char)10;
long long int var_19 = 6542774372257014532LL;
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
