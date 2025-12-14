#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_1 = (unsigned short)60457;
long long int var_2 = -9107837692088904543LL;
unsigned char var_5 = (unsigned char)76;
signed char var_7 = (signed char)98;
long long int var_8 = -2459661142296434239LL;
int var_10 = 322465989;
unsigned char var_12 = (unsigned char)48;
int var_13 = -1980099464;
int var_14 = -942921092;
signed char var_15 = (signed char)83;
signed char var_16 = (signed char)-51;
int zero = 0;
int var_20 = 1533576130;
unsigned char var_21 = (unsigned char)22;
void init() {
}

void checksum() {
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
