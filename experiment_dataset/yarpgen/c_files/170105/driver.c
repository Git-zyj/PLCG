#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_1 = -660670891;
unsigned short var_2 = (unsigned short)60642;
signed char var_9 = (signed char)-72;
long long int var_14 = 8415567997512073670LL;
unsigned char var_17 = (unsigned char)173;
int zero = 0;
unsigned char var_18 = (unsigned char)177;
short var_19 = (short)-4042;
signed char var_20 = (signed char)-14;
long long int var_21 = -8572655798517379725LL;
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
