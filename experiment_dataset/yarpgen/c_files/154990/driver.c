#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_0 = 771824815U;
signed char var_1 = (signed char)-93;
int var_2 = 58084522;
short var_4 = (short)-5834;
short var_10 = (short)15359;
signed char var_14 = (signed char)-38;
long long int var_15 = -4096499164850401669LL;
int zero = 0;
unsigned short var_16 = (unsigned short)19501;
unsigned short var_17 = (unsigned short)13903;
unsigned short var_18 = (unsigned short)48809;
unsigned short var_19 = (unsigned short)14153;
void init() {
}

void checksum() {
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
