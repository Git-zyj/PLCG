#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_0 = (short)-26290;
unsigned short var_3 = (unsigned short)55534;
unsigned long long int var_5 = 3172443575516548335ULL;
int var_11 = -1482063189;
long long int var_12 = 6642090090379965145LL;
short var_14 = (short)31676;
short var_15 = (short)-4878;
unsigned int var_16 = 2219541847U;
unsigned char var_17 = (unsigned char)22;
int zero = 0;
long long int var_18 = -164888236288384648LL;
long long int var_19 = 5452397751322737100LL;
unsigned int var_20 = 1203978473U;
unsigned char var_21 = (unsigned char)210;
long long int var_22 = -5267663038745184165LL;
void init() {
}

void checksum() {
    hash(&seed, var_18);
    hash(&seed, var_19);
    hash(&seed, var_20);
    hash(&seed, var_21);
    hash(&seed, var_22);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
