#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_0 = (unsigned short)63814;
unsigned long long int var_2 = 16796579780583406010ULL;
short var_7 = (short)-18174;
unsigned char var_9 = (unsigned char)225;
unsigned char var_10 = (unsigned char)160;
int zero = 0;
signed char var_11 = (signed char)54;
short var_12 = (short)-25362;
signed char var_13 = (signed char)76;
unsigned char var_14 = (unsigned char)160;
unsigned char var_15 = (unsigned char)84;
signed char var_16 = (signed char)-85;
signed char var_17 = (signed char)-98;
unsigned int var_18 = 2726408615U;
long long int var_19 = 3520358705718535106LL;
unsigned long long int var_20 = 9612645187410619918ULL;
void init() {
}

void checksum() {
    hash(&seed, var_11);
    hash(&seed, var_12);
    hash(&seed, var_13);
    hash(&seed, var_14);
    hash(&seed, var_15);
    hash(&seed, var_16);
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
