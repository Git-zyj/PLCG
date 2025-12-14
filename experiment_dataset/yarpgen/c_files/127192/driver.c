#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_0 = (signed char)-46;
unsigned long long int var_2 = 5076063208399277178ULL;
short var_6 = (short)-25281;
unsigned char var_8 = (unsigned char)188;
unsigned short var_11 = (unsigned short)770;
unsigned long long int var_16 = 17057847653855494354ULL;
int zero = 0;
unsigned short var_17 = (unsigned short)52112;
unsigned short var_18 = (unsigned short)16617;
unsigned short var_19 = (unsigned short)28189;
void init() {
}

void checksum() {
    hash(&seed, var_17);
    hash(&seed, var_18);
    hash(&seed, var_19);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
