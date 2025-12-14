#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_1 = (short)-2064;
short var_6 = (short)17866;
_Bool var_7 = (_Bool)0;
short var_13 = (short)-32032;
int zero = 0;
int var_18 = -1005609586;
unsigned long long int var_19 = 4429152631491567626ULL;
unsigned short var_20 = (unsigned short)57757;
short var_21 = (short)-16246;
void init() {
}

void checksum() {
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
