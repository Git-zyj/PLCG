#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_0 = (short)-11912;
short var_3 = (short)24846;
unsigned char var_4 = (unsigned char)169;
unsigned short var_6 = (unsigned short)36544;
short var_7 = (short)3522;
unsigned char var_9 = (unsigned char)187;
unsigned int var_11 = 3504092465U;
unsigned char var_12 = (unsigned char)140;
long long int var_13 = -5305017163393234210LL;
_Bool var_14 = (_Bool)0;
int zero = 0;
signed char var_15 = (signed char)-50;
unsigned short var_16 = (unsigned short)64014;
unsigned int var_17 = 2143339930U;
long long int var_18 = 4326277369758826344LL;
void init() {
}

void checksum() {
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
