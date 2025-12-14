#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_0 = 13314037957130217367ULL;
unsigned short var_4 = (unsigned short)13445;
unsigned short var_6 = (unsigned short)54656;
short var_7 = (short)8995;
_Bool var_9 = (_Bool)0;
unsigned short var_10 = (unsigned short)11527;
long long int var_12 = 8492199831355893861LL;
int zero = 0;
unsigned short var_13 = (unsigned short)23486;
_Bool var_14 = (_Bool)0;
void init() {
}

void checksum() {
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
