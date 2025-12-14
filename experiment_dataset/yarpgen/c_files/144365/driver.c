#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_1 = -5547912171272677665LL;
short var_5 = (short)-18352;
unsigned long long int var_7 = 6601354799264948093ULL;
unsigned long long int var_10 = 6205365807964554167ULL;
short var_13 = (short)11064;
int var_14 = 1475139368;
int zero = 0;
int var_20 = -326394676;
unsigned short var_21 = (unsigned short)39958;
unsigned short var_22 = (unsigned short)6774;
unsigned short var_23 = (unsigned short)51202;
void init() {
}

void checksum() {
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
