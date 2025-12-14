#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_1 = (unsigned short)38335;
unsigned int var_7 = 3098830936U;
long long int var_11 = 4977155305552053112LL;
signed char var_14 = (signed char)-83;
int zero = 0;
long long int var_16 = -9012021285122542120LL;
signed char var_17 = (signed char)30;
long long int var_18 = -1977198949157907938LL;
void init() {
}

void checksum() {
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
