#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_0 = (signed char)-74;
unsigned int var_1 = 946573357U;
long long int var_2 = 8297522356007296133LL;
unsigned long long int var_4 = 14760546090810659144ULL;
unsigned short var_6 = (unsigned short)20669;
short var_7 = (short)10525;
unsigned int var_9 = 3087990718U;
unsigned short var_11 = (unsigned short)20316;
int zero = 0;
int var_12 = -319803090;
short var_13 = (short)-21761;
long long int var_14 = -5716911173803699636LL;
long long int var_15 = -8359771119860608942LL;
short var_16 = (short)-15298;
void init() {
}

void checksum() {
    hash(&seed, var_12);
    hash(&seed, var_13);
    hash(&seed, var_14);
    hash(&seed, var_15);
    hash(&seed, var_16);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
