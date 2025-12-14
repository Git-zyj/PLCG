#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_3 = 3775209342U;
unsigned char var_4 = (unsigned char)215;
unsigned int var_6 = 4230549901U;
int var_13 = -1307491807;
unsigned long long int var_16 = 4465942936656258806ULL;
long long int var_17 = -4094888274092000898LL;
int zero = 0;
signed char var_19 = (signed char)38;
short var_20 = (short)-8249;
unsigned char var_21 = (unsigned char)145;
signed char var_22 = (signed char)-76;
long long int var_23 = 7267761165479141020LL;
void init() {
}

void checksum() {
    hash(&seed, var_19);
    hash(&seed, var_20);
    hash(&seed, var_21);
    hash(&seed, var_22);
    hash(&seed, var_23);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
