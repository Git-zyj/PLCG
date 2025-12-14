#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_1 = (short)-6497;
unsigned char var_2 = (unsigned char)21;
_Bool var_7 = (_Bool)1;
short var_8 = (short)25723;
unsigned short var_9 = (unsigned short)20617;
short var_11 = (short)-28295;
int zero = 0;
unsigned short var_17 = (unsigned short)26011;
short var_18 = (short)27070;
unsigned char var_19 = (unsigned char)158;
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
