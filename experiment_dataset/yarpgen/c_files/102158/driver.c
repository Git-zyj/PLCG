#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_2 = (unsigned short)38813;
unsigned int var_4 = 1384288595U;
long long int var_5 = 3928577489454024630LL;
unsigned short var_6 = (unsigned short)25996;
unsigned int var_9 = 2048034892U;
unsigned short var_10 = (unsigned short)62071;
long long int var_11 = 2392892872936546538LL;
short var_13 = (short)16741;
int zero = 0;
unsigned short var_14 = (unsigned short)54569;
long long int var_15 = 8371223242902445070LL;
int var_16 = 1104440648;
unsigned int var_17 = 1444443230U;
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
