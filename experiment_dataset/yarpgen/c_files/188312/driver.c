#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_0 = (signed char)-84;
unsigned short var_1 = (unsigned short)8097;
short var_3 = (short)-30293;
_Bool var_6 = (_Bool)1;
signed char var_9 = (signed char)32;
_Bool var_10 = (_Bool)0;
int zero = 0;
unsigned long long int var_11 = 276344768909634670ULL;
short var_12 = (short)-2869;
void init() {
}

void checksum() {
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
