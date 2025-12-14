#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_1 = 1427400462731184738LL;
unsigned char var_2 = (unsigned char)160;
long long int var_3 = -2953647123163606542LL;
long long int var_4 = -6141061649262792539LL;
long long int var_6 = -78847305441034103LL;
signed char var_9 = (signed char)-70;
int var_10 = -480536831;
int zero = 0;
long long int var_11 = -7808021344018090411LL;
unsigned short var_12 = (unsigned short)45306;
unsigned short var_13 = (unsigned short)22032;
short var_14 = (short)-7646;
int var_15 = -1310038215;
void init() {
}

void checksum() {
    hash(&seed, var_11);
    hash(&seed, var_12);
    hash(&seed, var_13);
    hash(&seed, var_14);
    hash(&seed, var_15);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
