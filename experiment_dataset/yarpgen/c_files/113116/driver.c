#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_0 = (signed char)-66;
unsigned long long int var_3 = 15878277901346089407ULL;
short var_4 = (short)-25538;
unsigned char var_5 = (unsigned char)227;
unsigned int var_8 = 1765818687U;
short var_9 = (short)9838;
int var_11 = 225932622;
unsigned int var_13 = 3522361025U;
unsigned int var_14 = 2761905078U;
int zero = 0;
signed char var_15 = (signed char)-105;
signed char var_16 = (signed char)37;
int var_17 = 2095106659;
void init() {
}

void checksum() {
    hash(&seed, var_15);
    hash(&seed, var_16);
    hash(&seed, var_17);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
