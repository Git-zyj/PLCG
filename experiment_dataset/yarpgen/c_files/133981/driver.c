#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_0 = 3699538474375142980ULL;
short var_1 = (short)25195;
unsigned char var_3 = (unsigned char)134;
int zero = 0;
unsigned short var_11 = (unsigned short)39439;
short var_12 = (short)-24193;
unsigned short var_13 = (unsigned short)41391;
unsigned char var_14 = (unsigned char)208;
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
