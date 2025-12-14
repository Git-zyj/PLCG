#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_2 = 967421367U;
int var_6 = 747710614;
_Bool var_7 = (_Bool)1;
signed char var_8 = (signed char)-74;
signed char var_12 = (signed char)-60;
int zero = 0;
unsigned short var_13 = (unsigned short)59880;
signed char var_14 = (signed char)-29;
short var_15 = (short)-31909;
void init() {
}

void checksum() {
    hash(&seed, var_13);
    hash(&seed, var_14);
    hash(&seed, var_15);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
