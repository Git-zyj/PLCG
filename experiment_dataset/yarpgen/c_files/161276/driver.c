#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_0 = (short)-25793;
short var_3 = (short)26505;
int var_4 = -42781211;
int var_5 = 504743659;
signed char var_6 = (signed char)-83;
long long int var_9 = -4750617478198720740LL;
long long int var_10 = 5719421791040451596LL;
signed char var_11 = (signed char)-38;
short var_12 = (short)-10185;
int zero = 0;
unsigned int var_13 = 1027670134U;
short var_14 = (short)23784;
unsigned char var_15 = (unsigned char)121;
short var_16 = (short)4103;
void init() {
}

void checksum() {
    hash(&seed, var_13);
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
