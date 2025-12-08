#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_0 = -208894476;
short var_2 = (short)-6123;
short var_4 = (short)-18274;
unsigned int var_5 = 2937530796U;
signed char var_6 = (signed char)-44;
_Bool var_7 = (_Bool)1;
short var_8 = (short)-4470;
unsigned char var_9 = (unsigned char)107;
signed char var_10 = (signed char)-101;
int zero = 0;
signed char var_11 = (signed char)64;
_Bool var_12 = (_Bool)1;
unsigned long long int var_13 = 13883423488830602105ULL;
unsigned long long int var_14 = 15903415061136276284ULL;
void init() {
}

void checksum() {
    hash(&seed, var_11);
    hash(&seed, var_12);
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
