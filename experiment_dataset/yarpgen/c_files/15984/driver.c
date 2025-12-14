#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_0 = 1353542315;
unsigned char var_2 = (unsigned char)132;
signed char var_4 = (signed char)61;
signed char var_6 = (signed char)-65;
int var_7 = 262134139;
signed char var_11 = (signed char)-56;
short var_12 = (short)32390;
_Bool var_15 = (_Bool)0;
int zero = 0;
unsigned long long int var_16 = 3325391493643709123ULL;
unsigned char var_17 = (unsigned char)216;
unsigned long long int var_18 = 3784419822455416870ULL;
void init() {
}

void checksum() {
    hash(&seed, var_16);
    hash(&seed, var_17);
    hash(&seed, var_18);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
