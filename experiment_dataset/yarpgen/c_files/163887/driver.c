#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

_Bool var_0 = (_Bool)0;
unsigned char var_2 = (unsigned char)58;
short var_4 = (short)-16954;
unsigned char var_6 = (unsigned char)111;
short var_9 = (short)-15555;
signed char var_10 = (signed char)89;
unsigned short var_13 = (unsigned short)22094;
unsigned int var_15 = 107764400U;
long long int var_17 = -8483227750337859378LL;
int zero = 0;
unsigned long long int var_19 = 516380898187109435ULL;
int var_20 = 712371920;
signed char var_21 = (signed char)-121;
void init() {
}

void checksum() {
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
