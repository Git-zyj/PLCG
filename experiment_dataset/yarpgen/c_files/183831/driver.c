#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

_Bool var_0 = (_Bool)1;
unsigned long long int var_2 = 9944152925818367910ULL;
_Bool var_3 = (_Bool)1;
unsigned long long int var_4 = 18162222383512127521ULL;
signed char var_9 = (signed char)-104;
unsigned short var_11 = (unsigned short)61967;
int zero = 0;
unsigned char var_13 = (unsigned char)252;
short var_14 = (short)-28602;
void init() {
}

void checksum() {
    hash(&seed, var_13);
    hash(&seed, var_14);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
