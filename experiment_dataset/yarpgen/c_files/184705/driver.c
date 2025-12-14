#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_1 = (short)-6983;
unsigned char var_2 = (unsigned char)179;
short var_3 = (short)-778;
int var_4 = 2020110585;
int var_5 = -943649406;
short var_6 = (short)22488;
short var_9 = (short)-11299;
short var_10 = (short)-24910;
int zero = 0;
short var_11 = (short)-20009;
int var_12 = -1076144181;
unsigned char var_13 = (unsigned char)0;
unsigned char var_14 = (unsigned char)177;
void init() {
}

void checksum() {
    hash(&seed, var_11);
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
