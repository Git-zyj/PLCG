#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_3 = 1235156555;
unsigned int var_4 = 335502358U;
unsigned long long int var_5 = 17338461366341863331ULL;
unsigned long long int var_7 = 16137355682791156590ULL;
short var_8 = (short)27453;
unsigned short var_9 = (unsigned short)14059;
int zero = 0;
int var_12 = -783554263;
unsigned int var_13 = 2668418384U;
signed char var_14 = (signed char)-86;
short var_15 = (short)-11491;
void init() {
}

void checksum() {
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
