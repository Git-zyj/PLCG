#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_0 = (signed char)-32;
signed char var_2 = (signed char)-37;
int var_3 = -1493893512;
unsigned int var_5 = 2392928710U;
unsigned short var_8 = (unsigned short)37035;
long long int var_9 = 2496700068403570419LL;
_Bool var_11 = (_Bool)0;
_Bool var_13 = (_Bool)1;
_Bool var_14 = (_Bool)0;
int zero = 0;
signed char var_15 = (signed char)-98;
unsigned char var_16 = (unsigned char)125;
long long int var_17 = 478552807740890146LL;
int var_18 = -1500022022;
void init() {
}

void checksum() {
    hash(&seed, var_15);
    hash(&seed, var_16);
    hash(&seed, var_17);
    hash(&seed, var_18);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
