#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_0 = 1085748214896298791ULL;
unsigned long long int var_2 = 14418559670127253955ULL;
long long int var_3 = -3989095975281864395LL;
unsigned long long int var_4 = 11070171684447623820ULL;
unsigned long long int var_5 = 6540708778196266264ULL;
short var_6 = (short)16613;
int zero = 0;
unsigned char var_12 = (unsigned char)33;
short var_13 = (short)15016;
short var_14 = (short)22234;
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
