#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_1 = (short)-11772;
_Bool var_5 = (_Bool)1;
_Bool var_7 = (_Bool)0;
short var_10 = (short)-2551;
int var_12 = -705819139;
long long int var_13 = 5978179917959202657LL;
int zero = 0;
int var_14 = 645826036;
unsigned long long int var_15 = 12995697080908627611ULL;
short var_16 = (short)14043;
long long int var_17 = -715881393978215579LL;
void init() {
}

void checksum() {
    hash(&seed, var_14);
    hash(&seed, var_15);
    hash(&seed, var_16);
    hash(&seed, var_17);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
