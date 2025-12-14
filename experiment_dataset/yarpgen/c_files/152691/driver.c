#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_2 = (unsigned char)127;
int var_3 = -231853156;
int var_5 = -33848947;
short var_9 = (short)15368;
unsigned long long int var_10 = 135459291780961077ULL;
int zero = 0;
unsigned int var_19 = 1996937037U;
unsigned short var_20 = (unsigned short)15595;
unsigned int var_21 = 1315103821U;
short var_22 = (short)32380;
unsigned short var_23 = (unsigned short)20291;
void init() {
}

void checksum() {
    hash(&seed, var_19);
    hash(&seed, var_20);
    hash(&seed, var_21);
    hash(&seed, var_22);
    hash(&seed, var_23);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
