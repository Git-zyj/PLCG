#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_0 = -8838047472308967806LL;
int var_1 = -1702653654;
unsigned char var_3 = (unsigned char)9;
unsigned short var_4 = (unsigned short)34463;
int var_5 = -215401611;
long long int var_6 = -3735042333710906395LL;
_Bool var_7 = (_Bool)1;
long long int var_8 = 3591110435582423475LL;
int var_9 = -1066136047;
unsigned long long int var_10 = 11251011530870863776ULL;
int zero = 0;
unsigned short var_11 = (unsigned short)42474;
signed char var_12 = (signed char)-104;
void init() {
}

void checksum() {
    hash(&seed, var_11);
    hash(&seed, var_12);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
