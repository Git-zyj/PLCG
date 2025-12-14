#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

_Bool var_5 = (_Bool)1;
signed char var_6 = (signed char)-10;
long long int var_7 = -3189809880229462204LL;
short var_12 = (short)-2109;
int var_18 = -1332192869;
int zero = 0;
long long int var_19 = -2046818307790335907LL;
unsigned long long int var_20 = 3389214852624492228ULL;
signed char var_21 = (signed char)20;
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
