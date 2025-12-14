#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_2 = -943882335;
int var_5 = -908207515;
long long int var_6 = -5366129777447550869LL;
int var_7 = 331540106;
unsigned long long int var_9 = 4521434543074004635ULL;
unsigned int var_10 = 1053500214U;
short var_11 = (short)-31369;
long long int var_14 = -6603586563901769914LL;
int zero = 0;
long long int var_15 = -1901514986575548888LL;
long long int var_16 = 822575646131727107LL;
short var_17 = (short)30908;
unsigned short var_18 = (unsigned short)18587;
void init() {
}

void checksum() {
    hash(&seed, var_15);
    hash(&seed, var_16);
    hash(&seed, var_17);
    hash(&seed, var_18);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
