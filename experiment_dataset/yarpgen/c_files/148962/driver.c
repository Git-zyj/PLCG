#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_0 = (signed char)-11;
unsigned long long int var_5 = 13934389574668853040ULL;
unsigned char var_14 = (unsigned char)47;
signed char var_19 = (signed char)-73;
int zero = 0;
unsigned short var_20 = (unsigned short)32350;
short var_21 = (short)-29622;
unsigned short var_22 = (unsigned short)21383;
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
