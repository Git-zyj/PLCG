#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_1 = (signed char)61;
int var_2 = -353784437;
int var_3 = -1263489022;
unsigned short var_5 = (unsigned short)18049;
_Bool var_6 = (_Bool)1;
int var_8 = 455939974;
_Bool var_10 = (_Bool)0;
_Bool var_12 = (_Bool)0;
signed char var_13 = (signed char)-117;
int zero = 0;
unsigned short var_14 = (unsigned short)27065;
unsigned short var_15 = (unsigned short)46347;
int var_16 = -1780263778;
void init() {
}

void checksum() {
    hash(&seed, var_14);
    hash(&seed, var_15);
    hash(&seed, var_16);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
