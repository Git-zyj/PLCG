#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_1 = 4137865452U;
long long int var_2 = 4692206327392329271LL;
unsigned char var_4 = (unsigned char)6;
unsigned int var_6 = 1167841745U;
_Bool var_7 = (_Bool)1;
short var_11 = (short)10408;
unsigned int var_12 = 152679364U;
int zero = 0;
signed char var_14 = (signed char)57;
int var_15 = -1391214465;
int var_16 = 773891468;
unsigned long long int var_17 = 9687658594741864457ULL;
void init() {
}

void checksum() {
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
