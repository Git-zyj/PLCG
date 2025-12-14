#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_1 = (signed char)79;
signed char var_2 = (signed char)-20;
int var_3 = -1637793964;
unsigned long long int var_5 = 16642999638941451963ULL;
long long int var_6 = 1332727058786899336LL;
unsigned char var_8 = (unsigned char)200;
unsigned char var_9 = (unsigned char)83;
unsigned short var_10 = (unsigned short)49947;
_Bool var_11 = (_Bool)1;
int zero = 0;
int var_12 = 1055863419;
unsigned long long int var_13 = 16997453294364840230ULL;
int var_14 = 553872849;
short var_15 = (short)-15223;
void init() {
}

void checksum() {
    hash(&seed, var_12);
    hash(&seed, var_13);
    hash(&seed, var_14);
    hash(&seed, var_15);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
