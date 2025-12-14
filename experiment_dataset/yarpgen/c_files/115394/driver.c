#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_0 = 991278172U;
signed char var_1 = (signed char)-41;
unsigned long long int var_3 = 16346832008425573524ULL;
unsigned short var_4 = (unsigned short)39598;
unsigned int var_6 = 1036029151U;
_Bool var_7 = (_Bool)0;
unsigned short var_10 = (unsigned short)29024;
unsigned long long int var_11 = 10006016559110783173ULL;
unsigned int var_12 = 64433720U;
int zero = 0;
signed char var_14 = (signed char)51;
int var_15 = 1109933801;
void init() {
}

void checksum() {
    hash(&seed, var_14);
    hash(&seed, var_15);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
