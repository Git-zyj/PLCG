#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_0 = -4711539318461921276LL;
int var_1 = 638617565;
unsigned int var_2 = 662039137U;
long long int var_4 = -7435511971668284301LL;
signed char var_6 = (signed char)35;
int var_7 = 1164670850;
signed char var_8 = (signed char)-103;
signed char var_9 = (signed char)82;
unsigned short var_11 = (unsigned short)60206;
int zero = 0;
long long int var_12 = -545260513007619136LL;
int var_13 = 437005617;
signed char var_14 = (signed char)-11;
void init() {
}

void checksum() {
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
