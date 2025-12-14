#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

_Bool var_3 = (_Bool)1;
int var_4 = 1471326001;
short var_6 = (short)-11861;
unsigned short var_11 = (unsigned short)27277;
signed char var_12 = (signed char)108;
unsigned short var_14 = (unsigned short)23356;
signed char var_15 = (signed char)-105;
int zero = 0;
unsigned int var_17 = 1311771285U;
unsigned short var_18 = (unsigned short)42572;
_Bool var_19 = (_Bool)0;
unsigned int var_20 = 631674021U;
void init() {
}

void checksum() {
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
