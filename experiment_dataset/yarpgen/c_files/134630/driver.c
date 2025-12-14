#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_1 = (unsigned char)25;
short var_2 = (short)16393;
unsigned short var_3 = (unsigned short)41186;
unsigned int var_5 = 4269076070U;
short var_6 = (short)24464;
unsigned short var_7 = (unsigned short)13825;
unsigned long long int var_8 = 15188972307565400099ULL;
unsigned long long int var_10 = 461317180555815427ULL;
unsigned long long int var_11 = 8437566875734062595ULL;
int zero = 0;
unsigned long long int var_13 = 6954365763977860949ULL;
unsigned long long int var_14 = 5396594983028300411ULL;
unsigned char var_15 = (unsigned char)77;
void init() {
}

void checksum() {
    hash(&seed, var_13);
    hash(&seed, var_14);
    hash(&seed, var_15);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
