#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_0 = (signed char)85;
unsigned short var_3 = (unsigned short)53621;
signed char var_4 = (signed char)1;
short var_5 = (short)1535;
int var_6 = 102861240;
unsigned int var_8 = 2805139448U;
int zero = 0;
int var_10 = 1029358203;
unsigned long long int var_11 = 15995214707674850382ULL;
int var_12 = 1853362322;
unsigned short var_13 = (unsigned short)61562;
void init() {
}

void checksum() {
    hash(&seed, var_10);
    hash(&seed, var_11);
    hash(&seed, var_12);
    hash(&seed, var_13);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
