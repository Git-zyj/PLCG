#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_0 = (unsigned char)221;
unsigned char var_2 = (unsigned char)228;
int var_3 = 923699655;
int var_5 = -1430080125;
signed char var_8 = (signed char)70;
signed char var_9 = (signed char)9;
int var_10 = 31551983;
unsigned short var_11 = (unsigned short)63472;
unsigned int var_12 = 737543594U;
signed char var_14 = (signed char)-25;
int zero = 0;
signed char var_15 = (signed char)-41;
unsigned int var_16 = 2690585953U;
int var_17 = -955893238;
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
