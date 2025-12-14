#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_6 = (unsigned char)146;
long long int var_9 = 4094000737386685863LL;
short var_13 = (short)21880;
long long int var_14 = 387591006290455834LL;
unsigned short var_15 = (unsigned short)10596;
unsigned char var_16 = (unsigned char)18;
int zero = 0;
signed char var_17 = (signed char)-120;
int var_18 = 1905314828;
signed char var_19 = (signed char)21;
signed char var_20 = (signed char)-17;
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
