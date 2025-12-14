#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_0 = (short)21701;
unsigned int var_1 = 1775810061U;
unsigned int var_2 = 3463726536U;
unsigned long long int var_3 = 14232681579846607850ULL;
unsigned char var_5 = (unsigned char)163;
short var_6 = (short)-27360;
unsigned int var_7 = 2841867497U;
unsigned short var_8 = (unsigned short)37993;
signed char var_10 = (signed char)-111;
short var_11 = (short)-5569;
short var_12 = (short)22427;
int zero = 0;
signed char var_14 = (signed char)-63;
long long int var_15 = -4726789479309875315LL;
long long int var_16 = 7476594060989958812LL;
void init() {
}

void checksum() {
    hash(&seed, var_14);
    hash(&seed, var_15);
    hash(&seed, var_16);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
