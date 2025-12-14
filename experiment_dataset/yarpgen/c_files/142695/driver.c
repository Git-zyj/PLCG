#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_0 = -1608484431;
_Bool var_3 = (_Bool)0;
signed char var_4 = (signed char)-5;
unsigned int var_5 = 2124216722U;
signed char var_6 = (signed char)17;
unsigned long long int var_9 = 4218749461450523259ULL;
short var_10 = (short)-24433;
int zero = 0;
unsigned long long int var_11 = 4728129930241610340ULL;
short var_12 = (short)13593;
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
