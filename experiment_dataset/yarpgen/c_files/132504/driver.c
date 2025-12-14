#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_2 = (unsigned short)19753;
short var_3 = (short)15670;
_Bool var_4 = (_Bool)0;
int var_5 = -157447542;
int var_7 = 929381714;
unsigned long long int var_8 = 15884211137843268824ULL;
_Bool var_9 = (_Bool)1;
unsigned long long int var_10 = 8905103014290939905ULL;
int zero = 0;
unsigned long long int var_15 = 9318560556406593267ULL;
_Bool var_16 = (_Bool)0;
void init() {
}

void checksum() {
    hash(&seed, var_15);
    hash(&seed, var_16);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
