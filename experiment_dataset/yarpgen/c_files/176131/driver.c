#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_1 = (unsigned short)37944;
int var_2 = 985751047;
unsigned long long int var_5 = 4224710707905036305ULL;
unsigned long long int var_7 = 8492623334582125422ULL;
int var_8 = -704966798;
int zero = 0;
unsigned short var_10 = (unsigned short)20203;
_Bool var_11 = (_Bool)1;
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
