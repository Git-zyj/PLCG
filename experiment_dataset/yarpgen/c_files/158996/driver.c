#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_0 = 3266976089U;
long long int var_3 = -6358041046575672443LL;
long long int var_5 = -424357986658999546LL;
signed char var_6 = (signed char)18;
unsigned long long int var_7 = 11659911290516001299ULL;
long long int var_8 = -819028621138408899LL;
unsigned int var_9 = 3399603102U;
unsigned char var_11 = (unsigned char)150;
unsigned int var_12 = 4042017180U;
unsigned char var_13 = (unsigned char)173;
int var_15 = 2104513119;
unsigned char var_16 = (unsigned char)12;
int zero = 0;
unsigned char var_18 = (unsigned char)63;
unsigned short var_19 = (unsigned short)14587;
unsigned long long int var_20 = 11167099495111493511ULL;
int var_21 = 1793864580;
unsigned short var_22 = (unsigned short)15640;
void init() {
}

void checksum() {
    hash(&seed, var_18);
    hash(&seed, var_19);
    hash(&seed, var_20);
    hash(&seed, var_21);
    hash(&seed, var_22);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
