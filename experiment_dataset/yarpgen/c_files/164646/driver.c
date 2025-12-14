#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_0 = (short)-19296;
short var_5 = (short)-3119;
short var_6 = (short)8081;
unsigned int var_7 = 1043525787U;
signed char var_8 = (signed char)31;
short var_9 = (short)29009;
unsigned char var_11 = (unsigned char)213;
int var_12 = 1920446995;
int zero = 0;
signed char var_17 = (signed char)-17;
short var_18 = (short)21401;
short var_19 = (short)-11805;
signed char var_20 = (signed char)-51;
unsigned char var_21 = (unsigned char)196;
void init() {
}

void checksum() {
    hash(&seed, var_17);
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
