#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_0 = (signed char)-20;
signed char var_3 = (signed char)81;
unsigned long long int var_5 = 16705912436904811149ULL;
unsigned int var_6 = 3264639576U;
int var_7 = -1095210164;
unsigned long long int var_8 = 16521598907799971636ULL;
unsigned int var_13 = 3655768293U;
short var_14 = (short)25868;
unsigned int var_15 = 3046330962U;
unsigned char var_16 = (unsigned char)121;
int zero = 0;
unsigned short var_18 = (unsigned short)41716;
unsigned char var_19 = (unsigned char)190;
signed char var_20 = (signed char)25;
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
