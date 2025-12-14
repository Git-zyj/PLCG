#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_0 = 16748374553779285150ULL;
short var_1 = (short)3113;
unsigned char var_4 = (unsigned char)30;
unsigned short var_5 = (unsigned short)7917;
unsigned long long int var_6 = 8219230091560144363ULL;
short var_7 = (short)23840;
_Bool var_8 = (_Bool)0;
signed char var_9 = (signed char)91;
unsigned short var_10 = (unsigned short)61581;
int zero = 0;
unsigned char var_11 = (unsigned char)19;
unsigned long long int var_12 = 4101125091900659589ULL;
unsigned int var_13 = 471238862U;
unsigned long long int var_14 = 5101703211342840841ULL;
signed char var_15 = (signed char)-75;
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
