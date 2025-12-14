#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_0 = (unsigned short)18554;
unsigned long long int var_2 = 4902942123734801781ULL;
short var_4 = (short)-7206;
unsigned int var_5 = 3515263661U;
unsigned char var_10 = (unsigned char)50;
int zero = 0;
_Bool var_11 = (_Bool)0;
signed char var_12 = (signed char)-66;
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
