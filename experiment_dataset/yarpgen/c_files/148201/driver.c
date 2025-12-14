#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_0 = -6314174538064518147LL;
signed char var_4 = (signed char)6;
_Bool var_5 = (_Bool)1;
int var_7 = 47697175;
unsigned long long int var_8 = 1424806311645375690ULL;
long long int var_9 = -6160335537907768940LL;
unsigned int var_10 = 1037181500U;
int zero = 0;
signed char var_11 = (signed char)12;
unsigned int var_12 = 765513756U;
unsigned long long int var_13 = 8596934484627960555ULL;
_Bool var_14 = (_Bool)0;
int var_15 = 1866400475;
void init() {
}

void checksum() {
    hash(&seed, var_11);
    hash(&seed, var_12);
    hash(&seed, var_13);
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
