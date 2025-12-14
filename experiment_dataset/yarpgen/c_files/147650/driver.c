#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_1 = -1780912229;
int var_2 = 534308048;
unsigned short var_6 = (unsigned short)60616;
_Bool var_7 = (_Bool)1;
int var_16 = -937214879;
int zero = 0;
int var_18 = 33890939;
unsigned short var_19 = (unsigned short)17009;
int var_20 = -1285864297;
void init() {
}

void checksum() {
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
