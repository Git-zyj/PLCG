#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_2 = 5009032790336898434LL;
short var_4 = (short)12204;
unsigned int var_6 = 2916447887U;
short var_10 = (short)-3477;
_Bool var_11 = (_Bool)1;
int zero = 0;
_Bool var_19 = (_Bool)1;
signed char var_20 = (signed char)-56;
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
