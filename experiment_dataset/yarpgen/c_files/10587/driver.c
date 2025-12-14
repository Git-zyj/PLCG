#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_0 = (short)4145;
int var_2 = -626503376;
int var_5 = 1796604742;
unsigned int var_6 = 1733159709U;
unsigned char var_7 = (unsigned char)204;
unsigned short var_8 = (unsigned short)9974;
short var_9 = (short)31149;
unsigned long long int var_10 = 11744082147493550332ULL;
unsigned int var_16 = 2572022400U;
int zero = 0;
unsigned long long int var_17 = 4331708319170267916ULL;
short var_18 = (short)12912;
unsigned char var_19 = (unsigned char)108;
void init() {
}

void checksum() {
    hash(&seed, var_17);
    hash(&seed, var_18);
    hash(&seed, var_19);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
