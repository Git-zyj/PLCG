#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_2 = 5172593392465099788LL;
short var_4 = (short)7267;
_Bool var_7 = (_Bool)0;
_Bool var_8 = (_Bool)0;
short var_12 = (short)-31718;
int zero = 0;
unsigned short var_18 = (unsigned short)41363;
unsigned short var_19 = (unsigned short)49716;
signed char var_20 = (signed char)-93;
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
