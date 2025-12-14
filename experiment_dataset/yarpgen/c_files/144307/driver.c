#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_2 = 285343745;
short var_4 = (short)28002;
_Bool var_8 = (_Bool)0;
unsigned long long int var_9 = 1350760335257554605ULL;
unsigned int var_10 = 2361742051U;
unsigned short var_11 = (unsigned short)56445;
short var_12 = (short)-15130;
int var_15 = -1197201317;
int zero = 0;
short var_16 = (short)-6867;
int var_17 = 1899228496;
unsigned char var_18 = (unsigned char)67;
unsigned char var_19 = (unsigned char)164;
void init() {
}

void checksum() {
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
