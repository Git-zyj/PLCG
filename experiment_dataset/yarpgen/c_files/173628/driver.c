#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_2 = -11644391869373956LL;
unsigned int var_3 = 2966790785U;
unsigned int var_5 = 2589119797U;
signed char var_6 = (signed char)-45;
unsigned short var_12 = (unsigned short)43774;
long long int var_14 = 3491951641402146483LL;
int zero = 0;
unsigned char var_19 = (unsigned char)98;
unsigned char var_20 = (unsigned char)79;
unsigned short var_21 = (unsigned short)64229;
void init() {
}

void checksum() {
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
