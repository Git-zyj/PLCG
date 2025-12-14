#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_0 = (unsigned short)27244;
int var_1 = 1815272980;
int var_5 = 1277377213;
int var_8 = 594529149;
int var_10 = -427476747;
int var_11 = -916566573;
unsigned short var_12 = (unsigned short)3452;
int zero = 0;
unsigned short var_15 = (unsigned short)25213;
int var_16 = 1434792864;
int var_17 = -950446730;
int var_18 = 1481988637;
unsigned short var_19 = (unsigned short)7395;
void init() {
}

void checksum() {
    hash(&seed, var_15);
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
