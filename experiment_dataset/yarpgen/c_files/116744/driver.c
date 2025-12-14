#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_0 = (unsigned char)48;
unsigned int var_2 = 1770941481U;
unsigned int var_3 = 1979004084U;
long long int var_4 = -6493358517632190160LL;
long long int var_5 = -2285880002508150296LL;
unsigned int var_6 = 3813933409U;
unsigned char var_7 = (unsigned char)188;
long long int var_8 = -5575317768214494951LL;
_Bool var_9 = (_Bool)1;
int zero = 0;
signed char var_10 = (signed char)-104;
unsigned short var_11 = (unsigned short)31901;
unsigned char var_12 = (unsigned char)118;
void init() {
}

void checksum() {
    hash(&seed, var_10);
    hash(&seed, var_11);
    hash(&seed, var_12);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
