#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_0 = 4159075172561301944LL;
unsigned char var_2 = (unsigned char)219;
unsigned int var_3 = 257549627U;
unsigned short var_4 = (unsigned short)34684;
unsigned long long int var_5 = 16980275573029887223ULL;
int var_6 = 1484440308;
unsigned long long int var_8 = 4910097947728639565ULL;
unsigned short var_10 = (unsigned short)14426;
unsigned long long int var_15 = 15245298034428327833ULL;
signed char var_16 = (signed char)85;
signed char var_17 = (signed char)-58;
int zero = 0;
_Bool var_18 = (_Bool)1;
short var_19 = (short)-16604;
long long int var_20 = 5755874181413585617LL;
long long int var_21 = 2546909974815667562LL;
void init() {
}

void checksum() {
    hash(&seed, var_18);
    hash(&seed, var_19);
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
