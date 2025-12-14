#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_0 = (short)5386;
signed char var_1 = (signed char)0;
_Bool var_2 = (_Bool)0;
int var_3 = -1519641030;
int var_4 = -332100109;
unsigned char var_5 = (unsigned char)213;
unsigned long long int var_7 = 1676457721484611824ULL;
unsigned char var_12 = (unsigned char)75;
int zero = 0;
unsigned long long int var_13 = 14015758732532037014ULL;
signed char var_14 = (signed char)-3;
int var_15 = -1879694306;
short var_16 = (short)29725;
unsigned short var_17 = (unsigned short)18670;
void init() {
}

void checksum() {
    hash(&seed, var_13);
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
