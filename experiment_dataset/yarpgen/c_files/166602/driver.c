#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_0 = (short)5009;
unsigned char var_1 = (unsigned char)211;
unsigned short var_2 = (unsigned short)53457;
long long int var_3 = 4886111753599250026LL;
long long int var_4 = 8078378350570428875LL;
signed char var_5 = (signed char)-60;
int var_10 = 1869335607;
unsigned char var_13 = (unsigned char)128;
short var_15 = (short)-9701;
unsigned int var_16 = 3825077986U;
int zero = 0;
short var_17 = (short)-14586;
long long int var_18 = 8814814244606038356LL;
signed char var_19 = (signed char)-57;
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
