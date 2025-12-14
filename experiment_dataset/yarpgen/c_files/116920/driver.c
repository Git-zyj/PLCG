#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_0 = 1715621147U;
short var_2 = (short)10906;
short var_3 = (short)24923;
long long int var_4 = -5282567505323828488LL;
long long int var_7 = 59435338448316680LL;
int var_8 = 852874949;
long long int var_9 = 3627852475027953404LL;
int zero = 0;
unsigned long long int var_11 = 15101789131992882090ULL;
unsigned short var_12 = (unsigned short)39790;
long long int var_13 = -6119660940820364240LL;
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
