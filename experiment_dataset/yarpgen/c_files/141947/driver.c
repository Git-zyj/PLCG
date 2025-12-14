#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_0 = (signed char)-103;
short var_3 = (short)-27669;
unsigned char var_13 = (unsigned char)89;
int zero = 0;
unsigned long long int var_15 = 472829133240933644ULL;
unsigned short var_16 = (unsigned short)18502;
_Bool var_17 = (_Bool)1;
short var_18 = (short)-30157;
short var_19 = (short)27104;
unsigned short var_20 = (unsigned short)60281;
void init() {
}

void checksum() {
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
