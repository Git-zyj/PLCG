#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_5 = (unsigned short)41127;
signed char var_6 = (signed char)-84;
unsigned short var_8 = (unsigned short)11176;
_Bool var_13 = (_Bool)0;
int zero = 0;
unsigned long long int var_14 = 14406701238991597568ULL;
unsigned short var_15 = (unsigned short)52475;
unsigned short var_16 = (unsigned short)11456;
_Bool var_17 = (_Bool)1;
unsigned long long int var_18 = 8588200490303274094ULL;
void init() {
}

void checksum() {
    hash(&seed, var_14);
    hash(&seed, var_15);
    hash(&seed, var_16);
    hash(&seed, var_17);
    hash(&seed, var_18);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
