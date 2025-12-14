#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_1 = -844098064;
unsigned char var_2 = (unsigned char)123;
int var_3 = -1048237759;
unsigned short var_6 = (unsigned short)54708;
short var_7 = (short)-29765;
unsigned short var_10 = (unsigned short)62433;
int zero = 0;
unsigned short var_13 = (unsigned short)49785;
long long int var_14 = 4312588151822401976LL;
long long int var_15 = 7008719867526943759LL;
short var_16 = (short)-9765;
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
