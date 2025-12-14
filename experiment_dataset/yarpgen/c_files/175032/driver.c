#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_0 = (unsigned short)10458;
unsigned int var_3 = 4225573822U;
signed char var_4 = (signed char)-65;
long long int var_5 = -9145588159649142177LL;
signed char var_6 = (signed char)-109;
unsigned int var_9 = 2827412617U;
int zero = 0;
int var_10 = 1088443989;
unsigned int var_11 = 3885403661U;
signed char var_12 = (signed char)-7;
void init() {
}

void checksum() {
    hash(&seed, var_10);
    hash(&seed, var_11);
    hash(&seed, var_12);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
