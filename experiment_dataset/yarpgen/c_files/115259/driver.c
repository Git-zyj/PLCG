#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_2 = (unsigned short)42269;
signed char var_3 = (signed char)64;
unsigned int var_4 = 2630209383U;
signed char var_5 = (signed char)12;
unsigned int var_7 = 3576503364U;
short var_9 = (short)-10674;
short var_10 = (short)-31283;
int var_13 = -365465457;
int zero = 0;
long long int var_14 = -337544304554982140LL;
int var_15 = 49238120;
void init() {
}

void checksum() {
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
