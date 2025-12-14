#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_0 = 940070870815454487LL;
long long int var_1 = 4073273428126167922LL;
unsigned char var_2 = (unsigned char)184;
_Bool var_3 = (_Bool)0;
unsigned int var_5 = 3310401033U;
signed char var_6 = (signed char)106;
long long int var_7 = 4714849103024766490LL;
long long int var_8 = -5179506001270866722LL;
int zero = 0;
int var_10 = 601576509;
unsigned long long int var_11 = 14607895695249895081ULL;
unsigned int var_12 = 1290781400U;
long long int var_13 = -8613389549985740522LL;
long long int var_14 = 8612647294243703849LL;
void init() {
}

void checksum() {
    hash(&seed, var_10);
    hash(&seed, var_11);
    hash(&seed, var_12);
    hash(&seed, var_13);
    hash(&seed, var_14);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
