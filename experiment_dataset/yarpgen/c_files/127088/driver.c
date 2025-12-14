#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_1 = (unsigned short)27527;
long long int var_3 = 261589354334895376LL;
signed char var_4 = (signed char)-88;
unsigned long long int var_5 = 758233757844248018ULL;
signed char var_7 = (signed char)-12;
signed char var_8 = (signed char)8;
signed char var_11 = (signed char)13;
int zero = 0;
unsigned char var_12 = (unsigned char)132;
int var_13 = -2067495340;
_Bool var_14 = (_Bool)1;
void init() {
}

void checksum() {
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
