#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_0 = -2078714464;
int var_2 = -1345844647;
unsigned char var_12 = (unsigned char)118;
unsigned long long int var_13 = 9015718254929842612ULL;
int zero = 0;
int var_17 = -2074660770;
short var_18 = (short)15987;
_Bool var_19 = (_Bool)0;
void init() {
}

void checksum() {
    hash(&seed, var_17);
    hash(&seed, var_18);
    hash(&seed, var_19);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
