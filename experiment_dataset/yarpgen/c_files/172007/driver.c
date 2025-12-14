#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_0 = (unsigned char)126;
unsigned long long int var_2 = 3945458734777638520ULL;
signed char var_4 = (signed char)-86;
unsigned long long int var_5 = 12183020506586648948ULL;
signed char var_7 = (signed char)-74;
short var_8 = (short)25366;
int zero = 0;
_Bool var_10 = (_Bool)0;
_Bool var_11 = (_Bool)0;
unsigned long long int var_12 = 5270985600493893915ULL;
unsigned long long int var_13 = 10898168976368626326ULL;
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
