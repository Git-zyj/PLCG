#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_0 = (short)-23548;
_Bool var_2 = (_Bool)0;
signed char var_3 = (signed char)66;
long long int var_4 = -5330844172919226971LL;
unsigned int var_6 = 1859283818U;
unsigned short var_7 = (unsigned short)25767;
unsigned long long int var_9 = 99589541683430629ULL;
int zero = 0;
short var_10 = (short)21138;
_Bool var_11 = (_Bool)0;
signed char var_12 = (signed char)-120;
unsigned short var_13 = (unsigned short)18182;
short var_14 = (short)-19897;
void init() {
}

void checksum() {
    hash(&seed, var_10);
    hash(&seed, var_11);
    hash(&seed, var_12);
    hash(&seed, var_13);
    hash(&seed, var_14);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
