#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_1 = (short)12195;
_Bool var_2 = (_Bool)1;
signed char var_6 = (signed char)-37;
_Bool var_11 = (_Bool)1;
unsigned long long int var_14 = 13244304290115101865ULL;
int var_15 = 960160388;
int zero = 0;
signed char var_17 = (signed char)31;
int var_18 = -1403992280;
int var_19 = -1781742496;
void init() {
}

void checksum() {
    hash(&seed, var_17);
    hash(&seed, var_18);
    hash(&seed, var_19);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
