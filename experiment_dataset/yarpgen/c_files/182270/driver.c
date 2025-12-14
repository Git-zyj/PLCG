#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_0 = 1713940897;
unsigned short var_1 = (unsigned short)32108;
unsigned char var_2 = (unsigned char)127;
unsigned char var_5 = (unsigned char)17;
_Bool var_7 = (_Bool)0;
unsigned char var_10 = (unsigned char)28;
int var_15 = 1007479197;
int zero = 0;
int var_16 = -1485384641;
int var_17 = 198886768;
long long int var_18 = 1562211675740283511LL;
_Bool var_19 = (_Bool)1;
int var_20 = -1158675794;
unsigned short var_21 = (unsigned short)56837;
void init() {
}

void checksum() {
    hash(&seed, var_16);
    hash(&seed, var_17);
    hash(&seed, var_18);
    hash(&seed, var_19);
    hash(&seed, var_20);
    hash(&seed, var_21);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
