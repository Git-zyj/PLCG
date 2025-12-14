#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_0 = (unsigned char)91;
long long int var_1 = 7364496460617040637LL;
unsigned char var_2 = (unsigned char)39;
unsigned short var_4 = (unsigned short)44556;
long long int var_5 = 850405752382883157LL;
unsigned int var_6 = 9679003U;
short var_8 = (short)-24389;
signed char var_10 = (signed char)42;
signed char var_11 = (signed char)42;
unsigned long long int var_13 = 7250541954063937374ULL;
int zero = 0;
signed char var_15 = (signed char)-47;
unsigned char var_16 = (unsigned char)237;
unsigned short var_17 = (unsigned short)29843;
unsigned int var_18 = 2604863922U;
signed char var_19 = (signed char)-109;
void init() {
}

void checksum() {
    hash(&seed, var_15);
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
