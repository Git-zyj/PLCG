#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_2 = (signed char)-76;
short var_12 = (short)1426;
signed char var_15 = (signed char)-111;
unsigned short var_16 = (unsigned short)58466;
int zero = 0;
unsigned short var_17 = (unsigned short)36515;
unsigned char var_18 = (unsigned char)169;
_Bool var_19 = (_Bool)1;
int var_20 = 1718685214;
signed char var_21 = (signed char)29;
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
