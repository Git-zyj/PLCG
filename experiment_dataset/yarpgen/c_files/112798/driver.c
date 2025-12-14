#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_3 = (short)14441;
short var_4 = (short)-26999;
short var_5 = (short)20179;
short var_6 = (short)14482;
short var_8 = (short)-20482;
short var_9 = (short)28698;
short var_11 = (short)6031;
int zero = 0;
short var_12 = (short)-1451;
short var_13 = (short)7731;
short var_14 = (short)17408;
short var_15 = (short)-18022;
short var_16 = (short)-13163;
void init() {
}

void checksum() {
    hash(&seed, var_12);
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
