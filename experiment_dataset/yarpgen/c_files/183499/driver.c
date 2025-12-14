#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_1 = -990852641;
int var_2 = -742390044;
signed char var_4 = (signed char)-81;
unsigned char var_6 = (unsigned char)174;
unsigned char var_7 = (unsigned char)161;
short var_8 = (short)-31341;
unsigned int var_9 = 720935070U;
int zero = 0;
long long int var_12 = 2079714950619305948LL;
short var_13 = (short)31153;
void init() {
}

void checksum() {
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
