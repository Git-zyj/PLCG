#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_1 = (unsigned short)55241;
unsigned int var_2 = 411686716U;
long long int var_3 = 7144919124884401609LL;
unsigned short var_6 = (unsigned short)53503;
unsigned short var_7 = (unsigned short)3223;
unsigned long long int var_8 = 12014003342274060028ULL;
short var_9 = (short)-19863;
unsigned short var_10 = (unsigned short)62934;
unsigned short var_12 = (unsigned short)29947;
int zero = 0;
unsigned short var_16 = (unsigned short)3643;
long long int var_17 = -1446641075320929073LL;
unsigned int var_18 = 3222221915U;
long long int var_19 = 7608716273781844979LL;
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
