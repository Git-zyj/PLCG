#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_0 = (unsigned char)6;
short var_1 = (short)-12523;
unsigned long long int var_3 = 4650842359507714866ULL;
long long int var_4 = 467219766462199744LL;
unsigned char var_5 = (unsigned char)41;
long long int var_6 = -2664781024930123254LL;
_Bool var_9 = (_Bool)0;
int zero = 0;
_Bool var_10 = (_Bool)0;
unsigned int var_11 = 3742011084U;
unsigned char var_12 = (unsigned char)117;
unsigned int var_13 = 3529941864U;
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
