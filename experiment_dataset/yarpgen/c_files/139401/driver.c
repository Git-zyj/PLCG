#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_1 = (short)-8426;
long long int var_3 = 7826432815967495238LL;
unsigned short var_9 = (unsigned short)47135;
unsigned int var_12 = 3341881140U;
unsigned short var_14 = (unsigned short)10349;
signed char var_17 = (signed char)-6;
int zero = 0;
unsigned short var_18 = (unsigned short)19412;
unsigned int var_19 = 3520259633U;
unsigned short var_20 = (unsigned short)37352;
short var_21 = (short)-25860;
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
