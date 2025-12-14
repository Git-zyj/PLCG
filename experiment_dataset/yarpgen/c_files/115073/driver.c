#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_0 = (unsigned char)36;
unsigned char var_1 = (unsigned char)32;
unsigned long long int var_2 = 690542193277512740ULL;
signed char var_3 = (signed char)16;
long long int var_4 = 6815223359834757066LL;
unsigned char var_5 = (unsigned char)125;
_Bool var_7 = (_Bool)1;
unsigned long long int var_8 = 8697169836144286105ULL;
unsigned char var_9 = (unsigned char)183;
unsigned long long int var_10 = 10535528931325178540ULL;
short var_12 = (short)-6139;
signed char var_13 = (signed char)121;
unsigned long long int var_14 = 16805743232570732299ULL;
int zero = 0;
unsigned char var_15 = (unsigned char)109;
unsigned int var_16 = 1002199688U;
unsigned short var_17 = (unsigned short)49094;
unsigned short var_18 = (unsigned short)28309;
unsigned short var_19 = (unsigned short)3271;
unsigned char var_20 = (unsigned char)104;
unsigned short var_21 = (unsigned short)54087;
unsigned short var_22 = (unsigned short)54777;
unsigned short var_23 = (unsigned short)25099;
unsigned char var_24 = (unsigned char)75;
unsigned char var_25 = (unsigned char)180;
void init() {
}

void checksum() {
    hash(&seed, var_15);
    hash(&seed, var_16);
    hash(&seed, var_17);
    hash(&seed, var_18);
    hash(&seed, var_19);
    hash(&seed, var_20);
    hash(&seed, var_21);
    hash(&seed, var_22);
    hash(&seed, var_23);
    hash(&seed, var_24);
    hash(&seed, var_25);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
