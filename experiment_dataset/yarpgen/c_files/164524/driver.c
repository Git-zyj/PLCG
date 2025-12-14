#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_4 = (short)-8044;
unsigned long long int var_8 = 8639135540482490563ULL;
long long int var_12 = -3113865483838981799LL;
unsigned long long int var_13 = 13334514158363222337ULL;
unsigned int var_16 = 529115167U;
unsigned long long int var_19 = 14158612176769201963ULL;
int zero = 0;
signed char var_20 = (signed char)-57;
unsigned char var_21 = (unsigned char)155;
unsigned long long int var_22 = 2570229445024500463ULL;
short var_23 = (short)-21451;
void init() {
}

void checksum() {
    hash(&seed, var_20);
    hash(&seed, var_21);
    hash(&seed, var_22);
    hash(&seed, var_23);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
