#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_4 = (short)4429;
int var_8 = -1356550845;
unsigned long long int var_12 = 17585841143396544535ULL;
unsigned long long int var_14 = 13959752890245859735ULL;
_Bool var_16 = (_Bool)0;
int zero = 0;
_Bool var_18 = (_Bool)0;
unsigned long long int var_19 = 16740461194716605971ULL;
int var_20 = -1971013360;
unsigned long long int var_21 = 5115992283851429730ULL;
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
