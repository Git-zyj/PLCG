#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_0 = -5066985144298341651LL;
unsigned short var_2 = (unsigned short)14945;
unsigned short var_6 = (unsigned short)59934;
unsigned short var_9 = (unsigned short)40354;
short var_10 = (short)15478;
int zero = 0;
unsigned short var_14 = (unsigned short)41916;
unsigned long long int var_15 = 733230114500857285ULL;
int var_16 = 1494405761;
unsigned char var_17 = (unsigned char)31;
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
