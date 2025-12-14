#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_1 = 66744136513139046LL;
short var_3 = (short)26700;
unsigned int var_4 = 1359902520U;
unsigned char var_5 = (unsigned char)133;
unsigned char var_6 = (unsigned char)237;
unsigned short var_8 = (unsigned short)26016;
unsigned char var_9 = (unsigned char)50;
unsigned char var_10 = (unsigned char)6;
int zero = 0;
int var_15 = 834890614;
long long int var_16 = 1080873542884557639LL;
long long int var_17 = 9140045287411990099LL;
unsigned char var_18 = (unsigned char)22;
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
