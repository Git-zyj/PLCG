#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_0 = (short)7699;
short var_1 = (short)-27515;
unsigned short var_2 = (unsigned short)2356;
short var_3 = (short)32555;
int var_4 = 1281198615;
unsigned char var_5 = (unsigned char)181;
short var_6 = (short)-12823;
unsigned char var_8 = (unsigned char)39;
unsigned short var_9 = (unsigned short)55185;
int var_10 = -510481841;
int var_11 = -1243964960;
short var_12 = (short)7466;
unsigned short var_13 = (unsigned short)22775;
unsigned char var_14 = (unsigned char)214;
unsigned char var_15 = (unsigned char)250;
short var_16 = (short)3667;
int var_17 = -1889360921;
int var_18 = 1459148601;
unsigned char var_19 = (unsigned char)100;
int zero = 0;
unsigned short var_20 = (unsigned short)18372;
unsigned short var_21 = (unsigned short)39146;
unsigned char var_22 = (unsigned char)62;
short var_23 = (short)-32161;
unsigned short var_24 = (unsigned short)15431;
short var_25 = (short)-5805;
int var_26 = -933530297;
void init() {
}

void checksum() {
    hash(&seed, var_20);
    hash(&seed, var_21);
    hash(&seed, var_22);
    hash(&seed, var_23);
    hash(&seed, var_24);
    hash(&seed, var_25);
    hash(&seed, var_26);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
