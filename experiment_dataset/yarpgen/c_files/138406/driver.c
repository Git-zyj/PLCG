#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_4 = -2706533871912873165LL;
unsigned char var_7 = (unsigned char)208;
long long int var_9 = 997505407590605711LL;
long long int var_12 = 4391843088407713794LL;
short var_15 = (short)7026;
int zero = 0;
unsigned short var_16 = (unsigned short)55259;
short var_17 = (short)-25792;
int var_18 = 2021211054;
long long int var_19 = 3101267099739969570LL;
void init() {
}

void checksum() {
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
