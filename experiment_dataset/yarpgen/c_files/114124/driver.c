#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_1 = -2054875629;
unsigned short var_6 = (unsigned short)29457;
long long int var_9 = -3279642089131892062LL;
unsigned short var_11 = (unsigned short)28760;
short var_12 = (short)-23083;
int zero = 0;
unsigned char var_18 = (unsigned char)170;
unsigned short var_19 = (unsigned short)42830;
unsigned short var_20 = (unsigned short)45111;
void init() {
}

void checksum() {
    hash(&seed, var_18);
    hash(&seed, var_19);
    hash(&seed, var_20);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
