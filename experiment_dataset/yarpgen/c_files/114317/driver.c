#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_2 = 1494658717;
unsigned long long int var_3 = 16535624169982521413ULL;
int var_5 = -1541004900;
unsigned long long int var_6 = 1314918695399051514ULL;
short var_7 = (short)-2207;
int var_8 = -2086158193;
int zero = 0;
short var_10 = (short)7048;
int var_11 = -620490001;
signed char var_12 = (signed char)-80;
void init() {
}

void checksum() {
    hash(&seed, var_10);
    hash(&seed, var_11);
    hash(&seed, var_12);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
