#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_0 = (unsigned char)191;
signed char var_5 = (signed char)-121;
int var_6 = -1024906376;
long long int var_12 = 5638892027873436697LL;
unsigned long long int var_15 = 11399919086029840212ULL;
int zero = 0;
short var_16 = (short)4741;
short var_17 = (short)-23859;
signed char var_18 = (signed char)93;
unsigned char var_19 = (unsigned char)164;
void init() {
}

void checksum() {
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
