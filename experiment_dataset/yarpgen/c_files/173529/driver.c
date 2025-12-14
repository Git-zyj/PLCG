#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_0 = (short)-6019;
int var_2 = 1008038553;
int var_5 = -1177383511;
unsigned char var_7 = (unsigned char)237;
int var_8 = 656278555;
short var_9 = (short)22304;
int var_11 = -19457589;
unsigned long long int var_12 = 14491437137177941317ULL;
signed char var_13 = (signed char)-76;
int zero = 0;
int var_15 = 277827056;
unsigned char var_16 = (unsigned char)59;
short var_17 = (short)-30721;
_Bool var_18 = (_Bool)1;
unsigned int var_19 = 4250949505U;
void init() {
}

void checksum() {
    hash(&seed, var_15);
    hash(&seed, var_16);
    hash(&seed, var_17);
    hash(&seed, var_18);
    hash(&seed, var_19);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
