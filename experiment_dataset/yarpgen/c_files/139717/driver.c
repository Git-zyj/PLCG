#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_3 = (short)-2461;
short var_4 = (short)-11831;
short var_8 = (short)20718;
short var_9 = (short)32765;
unsigned short var_10 = (unsigned short)34991;
_Bool var_13 = (_Bool)1;
unsigned char var_14 = (unsigned char)18;
unsigned char var_15 = (unsigned char)120;
int zero = 0;
unsigned short var_16 = (unsigned short)34263;
unsigned char var_17 = (unsigned char)167;
short var_18 = (short)-8574;
int var_19 = -554463040;
void init() {
}

void checksum() {
    hash(&seed, var_16);
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
