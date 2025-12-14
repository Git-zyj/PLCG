#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_3 = (short)-602;
int var_4 = 782238412;
unsigned long long int var_7 = 11915450340277304582ULL;
int var_12 = -96772138;
unsigned short var_14 = (unsigned short)3163;
_Bool var_15 = (_Bool)1;
int zero = 0;
short var_17 = (short)-871;
unsigned char var_18 = (unsigned char)235;
long long int var_19 = 9210014685620338125LL;
int var_20 = -515661396;
signed char var_21 = (signed char)34;
void init() {
}

void checksum() {
    hash(&seed, var_17);
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
