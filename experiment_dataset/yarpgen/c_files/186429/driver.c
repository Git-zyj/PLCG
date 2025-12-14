#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_1 = 8036653017678020514ULL;
unsigned short var_2 = (unsigned short)43271;
short var_4 = (short)-6931;
signed char var_15 = (signed char)-56;
int zero = 0;
_Bool var_19 = (_Bool)0;
short var_20 = (short)-11514;
void init() {
}

void checksum() {
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
