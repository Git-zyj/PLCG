#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_3 = (signed char)12;
signed char var_8 = (signed char)-80;
unsigned long long int var_11 = 15188322300870202249ULL;
unsigned short var_12 = (unsigned short)20554;
int var_17 = -576208370;
short var_18 = (short)27182;
int zero = 0;
long long int var_20 = -8018851370598588141LL;
signed char var_21 = (signed char)17;
short var_22 = (short)20721;
void init() {
}

void checksum() {
    hash(&seed, var_20);
    hash(&seed, var_21);
    hash(&seed, var_22);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
