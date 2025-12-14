#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_1 = (signed char)-12;
long long int var_2 = -3281393217158955223LL;
long long int var_4 = 8983463838412287217LL;
int var_9 = 1527065392;
int var_10 = 1851145243;
unsigned char var_12 = (unsigned char)196;
int zero = 0;
signed char var_15 = (signed char)-1;
unsigned char var_16 = (unsigned char)244;
long long int var_17 = -7008050135795422826LL;
unsigned short var_18 = (unsigned short)135;
unsigned int var_19 = 863383815U;
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
