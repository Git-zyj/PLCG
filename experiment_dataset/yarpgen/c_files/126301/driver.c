#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_1 = 9525632541915712412ULL;
unsigned int var_5 = 376599676U;
signed char var_6 = (signed char)36;
unsigned short var_8 = (unsigned short)2139;
unsigned char var_9 = (unsigned char)196;
signed char var_11 = (signed char)-23;
unsigned short var_12 = (unsigned short)2872;
int zero = 0;
unsigned long long int var_14 = 14704798093595457751ULL;
unsigned long long int var_15 = 17974713369982792309ULL;
short var_16 = (short)-7376;
long long int var_17 = -3579109813316714524LL;
void init() {
}

void checksum() {
    hash(&seed, var_14);
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
