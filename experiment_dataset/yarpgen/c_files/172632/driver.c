#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_2 = (unsigned short)17841;
int var_3 = -939256807;
short var_4 = (short)24172;
_Bool var_7 = (_Bool)1;
signed char var_9 = (signed char)31;
unsigned int var_10 = 4124714012U;
signed char var_11 = (signed char)-103;
unsigned int var_13 = 3532958911U;
int zero = 0;
short var_14 = (short)-26102;
_Bool var_15 = (_Bool)1;
void init() {
}

void checksum() {
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
