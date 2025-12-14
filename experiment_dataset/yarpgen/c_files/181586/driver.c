#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_1 = -1011158957988288323LL;
unsigned int var_3 = 3900474840U;
_Bool var_5 = (_Bool)1;
int var_6 = 470628276;
long long int var_10 = 594118691753003654LL;
int var_11 = -2040657526;
signed char var_13 = (signed char)-65;
unsigned char var_14 = (unsigned char)119;
long long int var_16 = 6739874804765471122LL;
unsigned char var_17 = (unsigned char)111;
unsigned long long int var_18 = 10504671719447974082ULL;
int zero = 0;
unsigned short var_19 = (unsigned short)40553;
unsigned char var_20 = (unsigned char)80;
unsigned char var_21 = (unsigned char)248;
short var_22 = (short)-21485;
void init() {
}

void checksum() {
    hash(&seed, var_19);
    hash(&seed, var_20);
    hash(&seed, var_21);
    hash(&seed, var_22);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
