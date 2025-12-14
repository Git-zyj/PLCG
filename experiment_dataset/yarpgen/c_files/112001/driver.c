#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_2 = (short)22294;
short var_3 = (short)9524;
unsigned short var_4 = (unsigned short)53751;
unsigned int var_15 = 3193582651U;
short var_16 = (short)-8407;
int zero = 0;
unsigned char var_18 = (unsigned char)34;
unsigned long long int var_19 = 6728029246903311690ULL;
int var_20 = -2134374161;
signed char var_21 = (signed char)41;
void init() {
}

void checksum() {
    hash(&seed, var_18);
    hash(&seed, var_19);
    hash(&seed, var_20);
    hash(&seed, var_21);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
