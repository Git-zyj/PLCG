#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_1 = 16548392319323107520ULL;
short var_6 = (short)16787;
short var_7 = (short)18165;
unsigned int var_9 = 3058431123U;
signed char var_10 = (signed char)-74;
unsigned int var_18 = 2010371581U;
int zero = 0;
long long int var_20 = 2151487896995126964LL;
unsigned char var_21 = (unsigned char)211;
short var_22 = (short)10801;
void init() {
}

void checksum() {
    hash(&seed, var_20);
    hash(&seed, var_21);
    hash(&seed, var_22);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
