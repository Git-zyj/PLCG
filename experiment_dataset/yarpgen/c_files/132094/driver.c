#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_4 = 2676913002290936892LL;
int var_5 = -1499494640;
int var_8 = -123797351;
short var_11 = (short)22904;
unsigned char var_13 = (unsigned char)72;
int zero = 0;
int var_14 = 1701056329;
short var_15 = (short)20755;
signed char var_16 = (signed char)68;
signed char var_17 = (signed char)70;
long long int var_18 = 8876669123382926353LL;
void init() {
}

void checksum() {
    hash(&seed, var_14);
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
