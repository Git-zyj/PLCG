#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_0 = (signed char)-62;
unsigned char var_2 = (unsigned char)28;
int var_3 = -363313302;
short var_4 = (short)-25683;
unsigned int var_5 = 4027139945U;
unsigned int var_6 = 1050988203U;
unsigned short var_11 = (unsigned short)64472;
int zero = 0;
_Bool var_13 = (_Bool)1;
signed char var_14 = (signed char)-81;
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
