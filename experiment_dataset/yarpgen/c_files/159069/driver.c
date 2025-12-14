#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_0 = (signed char)121;
unsigned short var_5 = (unsigned short)57069;
signed char var_6 = (signed char)98;
signed char var_7 = (signed char)-109;
unsigned int var_13 = 1405641011U;
signed char var_14 = (signed char)-43;
int zero = 0;
signed char var_17 = (signed char)15;
short var_18 = (short)-23527;
signed char var_19 = (signed char)-92;
long long int var_20 = -851802213428730842LL;
void init() {
}

void checksum() {
    hash(&seed, var_17);
    hash(&seed, var_18);
    hash(&seed, var_19);
    hash(&seed, var_20);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
