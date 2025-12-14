#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_1 = (unsigned char)252;
unsigned short var_2 = (unsigned short)9572;
int var_5 = 987810407;
unsigned long long int var_6 = 3161747709867727548ULL;
unsigned char var_8 = (unsigned char)104;
signed char var_14 = (signed char)41;
_Bool var_16 = (_Bool)1;
int zero = 0;
unsigned short var_18 = (unsigned short)57658;
short var_19 = (short)-9808;
short var_20 = (short)-23792;
short var_21 = (short)-9491;
void init() {
}

void checksum() {
    hash(&seed, var_18);
    hash(&seed, var_19);
    hash(&seed, var_20);
    hash(&seed, var_21);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
