#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_0 = (unsigned short)55949;
unsigned int var_2 = 319148543U;
unsigned short var_5 = (unsigned short)45825;
unsigned char var_6 = (unsigned char)189;
long long int var_8 = 3892705783904790198LL;
unsigned int var_9 = 3064326947U;
unsigned short var_10 = (unsigned short)6189;
long long int var_11 = -3490574976409066136LL;
unsigned long long int var_14 = 9500212064593584704ULL;
unsigned long long int var_16 = 8029853835976139439ULL;
int zero = 0;
unsigned int var_17 = 4057080959U;
long long int var_18 = -8574128779144029469LL;
signed char var_19 = (signed char)-104;
void init() {
}

void checksum() {
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
