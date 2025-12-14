#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_1 = (short)19651;
long long int var_2 = -8702563532260146756LL;
short var_4 = (short)-20494;
unsigned short var_5 = (unsigned short)63480;
long long int var_6 = 138241852710272004LL;
short var_9 = (short)10496;
int zero = 0;
int var_10 = 1416264263;
signed char var_11 = (signed char)73;
unsigned long long int var_12 = 913209486640083029ULL;
int var_13 = 488301306;
unsigned long long int var_14 = 6694244106659621514ULL;
void init() {
}

void checksum() {
    hash(&seed, var_10);
    hash(&seed, var_11);
    hash(&seed, var_12);
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
