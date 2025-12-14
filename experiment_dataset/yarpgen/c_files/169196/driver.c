#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_0 = (short)13525;
unsigned short var_1 = (unsigned short)28545;
signed char var_5 = (signed char)-41;
signed char var_7 = (signed char)-13;
signed char var_8 = (signed char)-118;
unsigned char var_12 = (unsigned char)37;
int var_14 = -1455979125;
int zero = 0;
unsigned char var_16 = (unsigned char)251;
long long int var_17 = 6938239371388606065LL;
int var_18 = -1156076237;
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
