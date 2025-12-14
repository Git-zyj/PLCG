#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_1 = -1959713536;
unsigned char var_3 = (unsigned char)64;
signed char var_4 = (signed char)-32;
short var_6 = (short)-1242;
unsigned long long int var_12 = 15288237585685853431ULL;
int zero = 0;
unsigned long long int var_13 = 16857038805689728521ULL;
signed char var_14 = (signed char)-55;
int var_15 = 694523846;
void init() {
}

void checksum() {
    hash(&seed, var_13);
    hash(&seed, var_14);
    hash(&seed, var_15);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
