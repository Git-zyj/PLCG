#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_6 = 1487034963U;
int var_11 = 1513270550;
unsigned char var_12 = (unsigned char)156;
_Bool var_15 = (_Bool)0;
int zero = 0;
short var_19 = (short)25997;
unsigned int var_20 = 922150814U;
signed char var_21 = (signed char)-123;
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
