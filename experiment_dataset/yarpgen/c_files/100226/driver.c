#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_1 = 1636047153U;
unsigned int var_2 = 2842251361U;
short var_6 = (short)5587;
long long int var_8 = -198048433264071356LL;
unsigned long long int var_11 = 1806102658876707732ULL;
int var_14 = 1600267390;
int zero = 0;
int var_18 = -1627544920;
unsigned long long int var_19 = 11977821053946548435ULL;
unsigned char var_20 = (unsigned char)203;
unsigned long long int var_21 = 17786949873224195506ULL;
void init() {
}

void checksum() {
    hash(&seed, var_18);
    hash(&seed, var_19);
    hash(&seed, var_20);
    hash(&seed, var_21);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
