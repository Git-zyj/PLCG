#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_0 = (short)17541;
short var_2 = (short)-19356;
_Bool var_4 = (_Bool)1;
unsigned char var_5 = (unsigned char)206;
unsigned long long int var_6 = 14079747915230152516ULL;
short var_7 = (short)-6146;
unsigned char var_8 = (unsigned char)138;
unsigned char var_9 = (unsigned char)59;
unsigned int var_10 = 885969445U;
int zero = 0;
unsigned short var_11 = (unsigned short)53428;
signed char var_12 = (signed char)-117;
void init() {
}

void checksum() {
    hash(&seed, var_11);
    hash(&seed, var_12);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
