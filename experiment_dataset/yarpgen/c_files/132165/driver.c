#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_0 = (unsigned char)144;
unsigned int var_1 = 3014969999U;
unsigned char var_2 = (unsigned char)202;
signed char var_3 = (signed char)82;
unsigned long long int var_6 = 7628237963099322587ULL;
long long int var_9 = -4247213559576611373LL;
signed char var_12 = (signed char)-1;
unsigned char var_13 = (unsigned char)62;
unsigned short var_15 = (unsigned short)61030;
int zero = 0;
unsigned short var_16 = (unsigned short)37898;
unsigned char var_17 = (unsigned char)179;
void init() {
}

void checksum() {
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
