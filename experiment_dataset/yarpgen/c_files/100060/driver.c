#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_1 = 1446285936;
_Bool var_2 = (_Bool)1;
_Bool var_3 = (_Bool)0;
unsigned char var_4 = (unsigned char)74;
long long int var_6 = 3940546622137085644LL;
unsigned long long int var_7 = 7221581164410024126ULL;
unsigned char var_8 = (unsigned char)6;
int var_11 = -1996259580;
unsigned long long int var_12 = 9788072645881339478ULL;
long long int var_13 = 8701246904589130817LL;
signed char var_15 = (signed char)39;
unsigned long long int var_17 = 9558810370831423199ULL;
long long int var_19 = -3793186959670690806LL;
int zero = 0;
short var_20 = (short)22890;
unsigned short var_21 = (unsigned short)9633;
unsigned char var_22 = (unsigned char)17;
short var_23 = (short)28054;
void init() {
}

void checksum() {
    hash(&seed, var_20);
    hash(&seed, var_21);
    hash(&seed, var_22);
    hash(&seed, var_23);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
