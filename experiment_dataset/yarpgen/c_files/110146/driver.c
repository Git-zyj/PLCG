#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_0 = -1075259814;
int var_8 = 238720485;
signed char var_9 = (signed char)120;
unsigned int var_10 = 3622272913U;
unsigned short var_11 = (unsigned short)25242;
unsigned char var_12 = (unsigned char)89;
unsigned long long int var_14 = 11955450034150032026ULL;
int zero = 0;
unsigned long long int var_15 = 6517660595085307955ULL;
int var_16 = 62946388;
int var_17 = 700449140;
void init() {
}

void checksum() {
    hash(&seed, var_15);
    hash(&seed, var_16);
    hash(&seed, var_17);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
