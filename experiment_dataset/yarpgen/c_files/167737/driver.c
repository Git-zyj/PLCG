#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_1 = (signed char)83;
unsigned short var_2 = (unsigned short)57317;
int var_5 = -1093096346;
unsigned long long int var_7 = 8934551618295148844ULL;
unsigned char var_10 = (unsigned char)109;
unsigned int var_11 = 732309875U;
int zero = 0;
unsigned long long int var_15 = 914922364064779384ULL;
short var_16 = (short)27361;
short var_17 = (short)-25600;
int var_18 = -633712110;
int var_19 = 796024905;
void init() {
}

void checksum() {
    hash(&seed, var_15);
    hash(&seed, var_16);
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
