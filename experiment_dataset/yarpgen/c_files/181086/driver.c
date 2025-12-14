#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_2 = 5933589522405122276ULL;
signed char var_4 = (signed char)-67;
int var_6 = 1152015750;
_Bool var_8 = (_Bool)0;
signed char var_10 = (signed char)-26;
int zero = 0;
short var_19 = (short)21383;
_Bool var_20 = (_Bool)1;
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
