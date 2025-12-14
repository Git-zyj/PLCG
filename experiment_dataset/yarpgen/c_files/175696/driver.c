#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_0 = 1646836465;
unsigned long long int var_1 = 3268243905699487804ULL;
signed char var_2 = (signed char)99;
unsigned short var_4 = (unsigned short)52690;
signed char var_6 = (signed char)127;
unsigned long long int var_9 = 2578960516887248386ULL;
unsigned short var_10 = (unsigned short)14840;
signed char var_11 = (signed char)-90;
int zero = 0;
int var_13 = -1312119941;
unsigned short var_14 = (unsigned short)39047;
unsigned char var_15 = (unsigned char)202;
signed char var_16 = (signed char)27;
int var_17 = -1979149407;
void init() {
}

void checksum() {
    hash(&seed, var_13);
    hash(&seed, var_14);
    hash(&seed, var_15);
    hash(&seed, var_16);
    hash(&seed, var_17);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
