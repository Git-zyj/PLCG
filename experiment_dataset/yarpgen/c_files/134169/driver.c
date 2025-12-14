#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_0 = (short)19454;
unsigned short var_2 = (unsigned short)37686;
unsigned char var_3 = (unsigned char)161;
long long int var_4 = 624936444847195943LL;
_Bool var_6 = (_Bool)1;
short var_8 = (short)-16882;
unsigned char var_9 = (unsigned char)23;
int zero = 0;
unsigned char var_10 = (unsigned char)127;
unsigned char var_11 = (unsigned char)117;
unsigned short var_12 = (unsigned short)7533;
_Bool var_13 = (_Bool)1;
void init() {
}

void checksum() {
    hash(&seed, var_10);
    hash(&seed, var_11);
    hash(&seed, var_12);
    hash(&seed, var_13);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
