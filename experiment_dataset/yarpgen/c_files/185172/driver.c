#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_3 = (unsigned short)16453;
_Bool var_6 = (_Bool)1;
short var_7 = (short)-11242;
unsigned char var_11 = (unsigned char)242;
int zero = 0;
signed char var_15 = (signed char)75;
unsigned long long int var_16 = 17855734635609377858ULL;
unsigned long long int var_17 = 1115809650603275856ULL;
short var_18 = (short)-5627;
void init() {
}

void checksum() {
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
