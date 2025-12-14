#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_0 = 1109401770;
unsigned char var_4 = (unsigned char)73;
unsigned char var_5 = (unsigned char)165;
short var_6 = (short)32286;
signed char var_7 = (signed char)-127;
unsigned long long int var_8 = 3559372006506739470ULL;
long long int var_9 = -1154109001765831697LL;
int zero = 0;
signed char var_10 = (signed char)-87;
unsigned long long int var_11 = 16696349095658075321ULL;
short var_12 = (short)-9662;
int var_13 = 1765868153;
void init() {
}

void checksum() {
    hash(&seed, var_10);
    hash(&seed, var_11);
    hash(&seed, var_12);
    hash(&seed, var_13);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
