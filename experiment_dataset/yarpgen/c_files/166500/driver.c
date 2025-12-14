#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_0 = (unsigned char)96;
unsigned int var_4 = 1390419834U;
unsigned long long int var_6 = 5340833641836931545ULL;
unsigned short var_12 = (unsigned short)44071;
_Bool var_13 = (_Bool)0;
unsigned long long int var_14 = 12718801036748380609ULL;
int zero = 0;
unsigned long long int var_16 = 11128865868806002124ULL;
signed char var_17 = (signed char)110;
long long int var_18 = 2709156515894215450LL;
void init() {
}

void checksum() {
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
