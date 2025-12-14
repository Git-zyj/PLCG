#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_0 = (short)-28132;
unsigned short var_4 = (unsigned short)25487;
unsigned int var_9 = 75879304U;
long long int var_13 = 8088392858898577015LL;
unsigned char var_17 = (unsigned char)211;
int zero = 0;
long long int var_18 = -1907566281732528191LL;
unsigned long long int var_19 = 1100106363194698628ULL;
int var_20 = -1847514438;
long long int var_21 = -504097887979802255LL;
void init() {
}

void checksum() {
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
