#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_3 = 675528838;
unsigned short var_5 = (unsigned short)17141;
signed char var_6 = (signed char)-114;
unsigned long long int var_11 = 788519538303298489ULL;
unsigned short var_13 = (unsigned short)22693;
int var_15 = -275533742;
_Bool var_16 = (_Bool)1;
int zero = 0;
long long int var_17 = 941957273544948455LL;
int var_18 = 1079258306;
unsigned long long int var_19 = 16879064602640099850ULL;
unsigned long long int var_20 = 13351830418248010360ULL;
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
