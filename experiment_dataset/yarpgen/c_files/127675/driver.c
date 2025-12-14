#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_0 = 12430818246485143383ULL;
unsigned int var_1 = 1508703410U;
unsigned int var_2 = 646289215U;
long long int var_3 = 8711206568372636748LL;
unsigned short var_4 = (unsigned short)32617;
int var_5 = 1887286040;
signed char var_7 = (signed char)74;
signed char var_8 = (signed char)-15;
short var_10 = (short)22988;
unsigned int var_11 = 2700139974U;
long long int var_12 = -6076900724698085266LL;
int zero = 0;
unsigned int var_13 = 748424098U;
short var_14 = (short)-15484;
unsigned long long int var_15 = 12021181603380675751ULL;
unsigned long long int var_16 = 1664934855362226727ULL;
void init() {
}

void checksum() {
    hash(&seed, var_13);
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
