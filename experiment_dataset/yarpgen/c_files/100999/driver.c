#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_2 = (short)-17152;
short var_6 = (short)6810;
_Bool var_7 = (_Bool)1;
short var_10 = (short)4861;
signed char var_14 = (signed char)63;
int zero = 0;
unsigned long long int var_17 = 2910166892639090683ULL;
long long int var_18 = 2217215119179206560LL;
long long int var_19 = 7850755055983373901LL;
short var_20 = (short)7448;
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
