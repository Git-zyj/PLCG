#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_1 = 14657161136970076947ULL;
unsigned long long int var_10 = 12891660061233292023ULL;
unsigned char var_14 = (unsigned char)249;
unsigned char var_16 = (unsigned char)173;
int zero = 0;
unsigned short var_17 = (unsigned short)7919;
unsigned long long int var_18 = 4443748203348171508ULL;
unsigned char var_19 = (unsigned char)226;
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
