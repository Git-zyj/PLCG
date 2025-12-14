#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_0 = -1719621892;
unsigned short var_1 = (unsigned short)8789;
unsigned long long int var_3 = 6105091845185941166ULL;
unsigned short var_5 = (unsigned short)15782;
int var_6 = -452667896;
unsigned int var_7 = 117283792U;
int var_8 = -385937573;
int zero = 0;
int var_10 = 1555947204;
signed char var_11 = (signed char)-89;
unsigned int var_12 = 561957787U;
signed char var_13 = (signed char)-58;
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
