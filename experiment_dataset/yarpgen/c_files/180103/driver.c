#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_4 = (unsigned short)38586;
unsigned long long int var_5 = 4252301013509828750ULL;
unsigned short var_11 = (unsigned short)39095;
_Bool var_13 = (_Bool)1;
unsigned short var_14 = (unsigned short)60433;
unsigned short var_16 = (unsigned short)17414;
int zero = 0;
unsigned long long int var_18 = 4027913399602584484ULL;
short var_19 = (short)10794;
unsigned short var_20 = (unsigned short)20775;
void init() {
}

void checksum() {
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
