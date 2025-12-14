#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_0 = (short)-21136;
unsigned int var_1 = 1246492031U;
short var_2 = (short)69;
unsigned short var_3 = (unsigned short)24995;
signed char var_4 = (signed char)-32;
long long int var_6 = -6605884157006555569LL;
int var_8 = -1895693568;
unsigned char var_9 = (unsigned char)243;
unsigned short var_11 = (unsigned short)25195;
long long int var_12 = 644797808744566815LL;
unsigned int var_13 = 1831355271U;
int zero = 0;
unsigned int var_14 = 3254090481U;
long long int var_15 = 3911910873755196244LL;
_Bool var_16 = (_Bool)0;
signed char var_17 = (signed char)-104;
void init() {
}

void checksum() {
    hash(&seed, var_14);
    hash(&seed, var_15);
    hash(&seed, var_16);
    hash(&seed, var_17);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
