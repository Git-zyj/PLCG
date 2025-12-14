#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_1 = (unsigned short)44834;
short var_2 = (short)-24626;
unsigned short var_4 = (unsigned short)61060;
int var_5 = -1321294928;
unsigned char var_6 = (unsigned char)64;
_Bool var_8 = (_Bool)0;
unsigned short var_9 = (unsigned short)47318;
int zero = 0;
unsigned short var_11 = (unsigned short)4275;
unsigned short var_12 = (unsigned short)18572;
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
