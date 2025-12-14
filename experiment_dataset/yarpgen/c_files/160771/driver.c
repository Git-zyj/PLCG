#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_2 = (short)-10550;
short var_3 = (short)-13352;
short var_4 = (short)-2168;
short var_6 = (short)32371;
short var_8 = (short)-21246;
short var_10 = (short)27441;
short var_13 = (short)-29250;
int zero = 0;
short var_15 = (short)-31965;
short var_16 = (short)-19390;
short var_17 = (short)17578;
short var_18 = (short)-26406;
short var_19 = (short)-20128;
void init() {
}

void checksum() {
    hash(&seed, var_15);
    hash(&seed, var_16);
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
