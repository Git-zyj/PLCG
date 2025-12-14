#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_0 = 795005740;
short var_3 = (short)10831;
int var_5 = -1572125195;
short var_6 = (short)20249;
unsigned short var_8 = (unsigned short)626;
int var_9 = 1839242015;
int zero = 0;
unsigned long long int var_11 = 2473250955865806942ULL;
short var_12 = (short)-18451;
_Bool var_13 = (_Bool)0;
void init() {
}

void checksum() {
    hash(&seed, var_11);
    hash(&seed, var_12);
    hash(&seed, var_13);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
