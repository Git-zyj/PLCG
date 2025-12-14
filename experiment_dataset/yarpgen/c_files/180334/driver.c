#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_0 = 2531051609U;
long long int var_3 = -8968750637600286914LL;
unsigned int var_4 = 1272961273U;
int var_5 = 865801899;
long long int var_7 = -4996966442901041741LL;
unsigned int var_9 = 3183733404U;
short var_10 = (short)-2676;
int var_11 = 859319739;
unsigned short var_12 = (unsigned short)43556;
short var_13 = (short)-16526;
unsigned int var_14 = 1189462409U;
short var_15 = (short)-17375;
int zero = 0;
long long int var_16 = -6012526977973965300LL;
unsigned short var_17 = (unsigned short)59460;
short var_18 = (short)21700;
unsigned int var_19 = 4085126470U;
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
