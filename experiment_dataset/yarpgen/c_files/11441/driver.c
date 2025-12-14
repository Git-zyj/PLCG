#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_1 = 3237099025U;
unsigned char var_3 = (unsigned char)63;
long long int var_4 = -151603986616075964LL;
long long int var_6 = 5080442643937698155LL;
unsigned char var_7 = (unsigned char)135;
long long int var_9 = 4548918876015671493LL;
unsigned int var_13 = 3980979754U;
long long int var_14 = -3109508210698162756LL;
int zero = 0;
long long int var_15 = 7544422123623499213LL;
long long int var_16 = -7822604979725548385LL;
long long int var_17 = 6278265193673191831LL;
short var_18 = (short)26363;
short var_19 = (short)-389;
void init() {
}

void checksum() {
    hash(&seed, var_15);
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
