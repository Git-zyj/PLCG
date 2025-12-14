#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_0 = (short)28694;
unsigned short var_1 = (unsigned short)363;
long long int var_2 = 4592041063846062628LL;
unsigned long long int var_5 = 17340775498476374660ULL;
short var_8 = (short)-29828;
long long int var_9 = 1924290849289751656LL;
unsigned long long int var_10 = 11531173545880134374ULL;
long long int var_15 = -7045210831619512187LL;
short var_16 = (short)8113;
unsigned long long int var_17 = 16981422620691067963ULL;
int zero = 0;
short var_19 = (short)11679;
signed char var_20 = (signed char)72;
void init() {
}

void checksum() {
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
