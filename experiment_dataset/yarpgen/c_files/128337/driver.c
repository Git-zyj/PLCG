#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_0 = 182294788;
unsigned char var_1 = (unsigned char)103;
unsigned long long int var_2 = 12458886998084615512ULL;
_Bool var_3 = (_Bool)0;
_Bool var_4 = (_Bool)1;
unsigned char var_5 = (unsigned char)2;
unsigned char var_6 = (unsigned char)15;
long long int var_7 = 8781098605105350891LL;
int var_8 = -411404184;
long long int var_10 = 4900413411924824282LL;
int zero = 0;
int var_12 = 92288490;
short var_13 = (short)20944;
_Bool var_14 = (_Bool)0;
void init() {
}

void checksum() {
    hash(&seed, var_12);
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
