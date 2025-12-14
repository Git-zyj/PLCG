#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_0 = 4266514884508345398ULL;
unsigned short var_3 = (unsigned short)24885;
int var_4 = 82707994;
unsigned short var_5 = (unsigned short)17623;
unsigned long long int var_9 = 15062172552330306225ULL;
signed char var_14 = (signed char)49;
int zero = 0;
signed char var_15 = (signed char)-43;
unsigned char var_16 = (unsigned char)125;
unsigned short var_17 = (unsigned short)26400;
short var_18 = (short)27029;
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
