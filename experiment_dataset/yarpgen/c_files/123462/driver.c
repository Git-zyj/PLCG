#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_0 = (unsigned short)43651;
short var_2 = (short)13295;
short var_7 = (short)-22567;
unsigned long long int var_8 = 10215226317644222333ULL;
int var_10 = 2085018268;
unsigned int var_11 = 401305544U;
unsigned char var_13 = (unsigned char)145;
int zero = 0;
unsigned short var_16 = (unsigned short)13174;
signed char var_17 = (signed char)-97;
unsigned int var_18 = 3572085974U;
short var_19 = (short)-26172;
unsigned long long int var_20 = 6632119121467525228ULL;
void init() {
}

void checksum() {
    hash(&seed, var_16);
    hash(&seed, var_17);
    hash(&seed, var_18);
    hash(&seed, var_19);
    hash(&seed, var_20);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
