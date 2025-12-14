#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_1 = (unsigned char)164;
unsigned char var_3 = (unsigned char)65;
unsigned long long int var_5 = 17985375980029061402ULL;
_Bool var_6 = (_Bool)1;
unsigned char var_8 = (unsigned char)109;
int var_9 = -2110568787;
_Bool var_10 = (_Bool)1;
unsigned int var_11 = 16608353U;
int var_12 = -1905626297;
int zero = 0;
_Bool var_13 = (_Bool)1;
unsigned char var_14 = (unsigned char)19;
void init() {
}

void checksum() {
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
