#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_0 = (unsigned short)323;
unsigned long long int var_2 = 18246545429569795339ULL;
unsigned short var_3 = (unsigned short)62464;
unsigned int var_4 = 3985053794U;
unsigned long long int var_5 = 11444843763090488625ULL;
signed char var_6 = (signed char)39;
int var_8 = 1261358963;
long long int var_9 = 6905441083570958647LL;
long long int var_10 = 5921868629208332073LL;
unsigned short var_11 = (unsigned short)57533;
short var_13 = (short)28933;
int zero = 0;
long long int var_14 = 6087429464680550131LL;
unsigned char var_15 = (unsigned char)177;
unsigned short var_16 = (unsigned short)64001;
unsigned long long int var_17 = 14155055158568157060ULL;
long long int var_18 = 2956285969596224559LL;
void init() {
}

void checksum() {
    hash(&seed, var_14);
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
