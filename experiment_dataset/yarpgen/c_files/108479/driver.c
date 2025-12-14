#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_0 = -802462418165203797LL;
_Bool var_2 = (_Bool)0;
unsigned int var_3 = 1390949177U;
int var_7 = -729549367;
short var_8 = (short)-10904;
unsigned short var_9 = (unsigned short)29323;
short var_12 = (short)-6039;
signed char var_13 = (signed char)126;
int zero = 0;
short var_17 = (short)-20891;
short var_18 = (short)-20814;
unsigned long long int var_19 = 13273716997643653627ULL;
int var_20 = 1222831967;
void init() {
}

void checksum() {
    hash(&seed, var_17);
    hash(&seed, var_18);
    hash(&seed, var_19);
    hash(&seed, var_20);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
