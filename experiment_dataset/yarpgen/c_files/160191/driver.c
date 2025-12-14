#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_0 = 810911692U;
unsigned int var_1 = 495387436U;
unsigned short var_2 = (unsigned short)52926;
int var_5 = 1981649512;
int var_7 = -636020757;
unsigned long long int var_12 = 17639567962455583399ULL;
int zero = 0;
unsigned short var_16 = (unsigned short)19939;
int var_17 = 1308480230;
short var_18 = (short)-26017;
int var_19 = -562583953;
_Bool var_20 = (_Bool)1;
void init() {
}

void checksum() {
    hash(&seed, var_16);
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
