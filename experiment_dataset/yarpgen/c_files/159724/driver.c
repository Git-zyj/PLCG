#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_0 = (short)-29846;
unsigned int var_4 = 2137590455U;
signed char var_5 = (signed char)-57;
unsigned short var_7 = (unsigned short)10790;
signed char var_11 = (signed char)-54;
int zero = 0;
unsigned int var_18 = 3471890370U;
_Bool var_19 = (_Bool)1;
void init() {
}

void checksum() {
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
