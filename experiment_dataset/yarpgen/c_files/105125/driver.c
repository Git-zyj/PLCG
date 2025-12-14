#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_1 = -2826407852207718835LL;
int var_2 = 780614187;
unsigned char var_3 = (unsigned char)1;
unsigned char var_4 = (unsigned char)218;
short var_6 = (short)-10814;
unsigned short var_7 = (unsigned short)38815;
_Bool var_8 = (_Bool)1;
unsigned short var_14 = (unsigned short)23529;
unsigned short var_16 = (unsigned short)4147;
int var_19 = 1573157581;
int zero = 0;
unsigned short var_20 = (unsigned short)18689;
unsigned long long int var_21 = 720017896369359404ULL;
unsigned long long int var_22 = 9980193000323398317ULL;
short var_23 = (short)-26357;
void init() {
}

void checksum() {
    hash(&seed, var_20);
    hash(&seed, var_21);
    hash(&seed, var_22);
    hash(&seed, var_23);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
