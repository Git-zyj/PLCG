#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

_Bool var_1 = (_Bool)0;
unsigned char var_2 = (unsigned char)61;
signed char var_4 = (signed char)-74;
short var_5 = (short)26744;
unsigned int var_6 = 2699421384U;
unsigned char var_7 = (unsigned char)69;
unsigned short var_8 = (unsigned short)59477;
long long int var_11 = 8575084144650985886LL;
unsigned int var_13 = 3071975888U;
int zero = 0;
unsigned char var_14 = (unsigned char)132;
long long int var_15 = -479982722521187778LL;
_Bool var_16 = (_Bool)0;
void init() {
}

void checksum() {
    hash(&seed, var_14);
    hash(&seed, var_15);
    hash(&seed, var_16);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
