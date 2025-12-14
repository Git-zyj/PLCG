#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_1 = (short)18796;
unsigned int var_2 = 4085499043U;
signed char var_4 = (signed char)-70;
short var_5 = (short)-5385;
unsigned int var_8 = 564091958U;
unsigned int var_9 = 984219817U;
unsigned short var_10 = (unsigned short)23631;
short var_13 = (short)18752;
unsigned int var_14 = 2283772614U;
signed char var_17 = (signed char)-121;
int zero = 0;
signed char var_18 = (signed char)68;
short var_19 = (short)-11523;
unsigned int var_20 = 1041708312U;
unsigned int var_21 = 2638565778U;
unsigned int var_22 = 962892585U;
void init() {
}

void checksum() {
    hash(&seed, var_18);
    hash(&seed, var_19);
    hash(&seed, var_20);
    hash(&seed, var_21);
    hash(&seed, var_22);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
