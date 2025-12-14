#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

_Bool var_3 = (_Bool)0;
long long int var_4 = -8377241947133171672LL;
int var_5 = -625477177;
_Bool var_6 = (_Bool)0;
unsigned char var_7 = (unsigned char)208;
unsigned short var_10 = (unsigned short)182;
unsigned int var_11 = 2975192659U;
int var_12 = -1159092236;
int zero = 0;
unsigned short var_13 = (unsigned short)40822;
unsigned long long int var_14 = 3831595615728905252ULL;
int var_15 = 968300632;
unsigned char var_16 = (unsigned char)7;
void init() {
}

void checksum() {
    hash(&seed, var_13);
    hash(&seed, var_14);
    hash(&seed, var_15);
    hash(&seed, var_16);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
