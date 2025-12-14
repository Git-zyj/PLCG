#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_0 = (short)31578;
unsigned long long int var_3 = 4544636348279705759ULL;
long long int var_7 = 6206296222436452705LL;
unsigned short var_8 = (unsigned short)15923;
unsigned char var_10 = (unsigned char)236;
short var_11 = (short)-2807;
int zero = 0;
signed char var_14 = (signed char)-7;
short var_15 = (short)17469;
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
