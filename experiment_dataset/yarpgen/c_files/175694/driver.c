#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_2 = (unsigned short)53324;
unsigned short var_6 = (unsigned short)6699;
long long int var_8 = 8821724914692122975LL;
long long int var_9 = 7508373967248435355LL;
long long int var_10 = -1618685336136760914LL;
unsigned short var_12 = (unsigned short)50921;
int zero = 0;
unsigned char var_13 = (unsigned char)212;
long long int var_14 = 3875521807270737044LL;
long long int var_15 = 66600800757082139LL;
unsigned short var_16 = (unsigned short)1172;
unsigned short var_17 = (unsigned short)64901;
void init() {
}

void checksum() {
    hash(&seed, var_13);
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
