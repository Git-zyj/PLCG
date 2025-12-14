#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_0 = 2050475684295528596LL;
unsigned short var_2 = (unsigned short)46125;
long long int var_3 = -2742038611227903630LL;
_Bool var_6 = (_Bool)0;
unsigned int var_7 = 1066304904U;
unsigned int var_10 = 1998788111U;
int var_11 = 405004839;
int zero = 0;
signed char var_13 = (signed char)-104;
unsigned char var_14 = (unsigned char)94;
unsigned int var_15 = 215683715U;
void init() {
}

void checksum() {
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
