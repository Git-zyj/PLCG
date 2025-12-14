#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_0 = 2330134076U;
int var_1 = -727004060;
unsigned int var_2 = 1515971369U;
unsigned char var_3 = (unsigned char)62;
unsigned int var_4 = 687543984U;
unsigned short var_5 = (unsigned short)22574;
short var_6 = (short)-22312;
short var_7 = (short)22437;
int var_8 = -1669597667;
signed char var_9 = (signed char)-20;
int var_10 = 39530596;
_Bool var_11 = (_Bool)1;
int zero = 0;
unsigned long long int var_12 = 10259079504706192329ULL;
unsigned int var_13 = 3521478960U;
unsigned long long int var_14 = 12154875415694649555ULL;
long long int var_15 = -2611829805455814603LL;
signed char var_16 = (signed char)-94;
void init() {
}

void checksum() {
    hash(&seed, var_12);
    hash(&seed, var_13);
    hash(&seed, var_14);
    hash(&seed, var_15);
    hash(&seed, var_16);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
