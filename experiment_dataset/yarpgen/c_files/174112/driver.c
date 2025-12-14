#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_0 = -4479349096100499215LL;
int var_1 = 954987671;
int var_2 = -1313394702;
signed char var_3 = (signed char)71;
unsigned char var_4 = (unsigned char)252;
short var_5 = (short)30387;
_Bool var_6 = (_Bool)1;
signed char var_8 = (signed char)113;
_Bool var_9 = (_Bool)1;
unsigned char var_11 = (unsigned char)188;
_Bool var_13 = (_Bool)0;
int zero = 0;
unsigned int var_15 = 766492830U;
unsigned short var_16 = (unsigned short)59427;
unsigned int var_17 = 770395403U;
unsigned int var_18 = 182601412U;
long long int var_19 = -5374936306103347958LL;
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
