#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_1 = -7768494413451419395LL;
unsigned char var_7 = (unsigned char)223;
unsigned short var_8 = (unsigned short)40059;
unsigned char var_9 = (unsigned char)210;
long long int var_10 = 9181737052993179706LL;
unsigned short var_13 = (unsigned short)28636;
unsigned char var_14 = (unsigned char)159;
unsigned short var_16 = (unsigned short)27767;
int zero = 0;
long long int var_19 = -5199941086470818978LL;
long long int var_20 = 6971838061833621323LL;
unsigned long long int var_21 = 9658073097838560967ULL;
unsigned long long int var_22 = 10716584961160153990ULL;
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
