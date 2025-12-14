#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_0 = 4492088072692660225ULL;
_Bool var_1 = (_Bool)1;
unsigned long long int var_2 = 15008074824442436250ULL;
_Bool var_4 = (_Bool)1;
unsigned int var_6 = 658791353U;
unsigned int var_7 = 3582734490U;
short var_8 = (short)15351;
short var_9 = (short)4888;
int zero = 0;
unsigned short var_10 = (unsigned short)1149;
short var_11 = (short)14816;
void init() {
}

void checksum() {
    hash(&seed, var_10);
    hash(&seed, var_11);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
