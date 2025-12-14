#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_2 = 8452700436721163389LL;
unsigned long long int var_4 = 7478213737410219879ULL;
unsigned long long int var_5 = 14984887865047426569ULL;
_Bool var_7 = (_Bool)1;
int zero = 0;
int var_17 = -460609939;
short var_18 = (short)-3606;
int var_19 = -440629551;
unsigned long long int var_20 = 11125756437082273754ULL;
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
