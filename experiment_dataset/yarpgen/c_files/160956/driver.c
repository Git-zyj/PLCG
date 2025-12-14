#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_0 = (unsigned short)36389;
unsigned short var_3 = (unsigned short)18630;
unsigned long long int var_4 = 1677858337830941513ULL;
signed char var_5 = (signed char)66;
short var_11 = (short)-2897;
unsigned short var_17 = (unsigned short)58953;
int zero = 0;
short var_20 = (short)-11481;
short var_21 = (short)-25842;
short var_22 = (short)-842;
void init() {
}

void checksum() {
    hash(&seed, var_20);
    hash(&seed, var_21);
    hash(&seed, var_22);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
