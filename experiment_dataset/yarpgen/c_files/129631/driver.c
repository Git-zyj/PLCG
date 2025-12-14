#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_1 = (signed char)-57;
unsigned short var_3 = (unsigned short)28479;
int var_4 = 1304956809;
unsigned int var_5 = 4179046507U;
unsigned int var_7 = 1485637217U;
signed char var_8 = (signed char)19;
_Bool var_9 = (_Bool)0;
int var_10 = 1368999748;
int zero = 0;
int var_11 = -2024139802;
short var_12 = (short)10308;
signed char var_13 = (signed char)71;
short var_14 = (short)-10391;
unsigned int var_15 = 3800571434U;
void init() {
}

void checksum() {
    hash(&seed, var_11);
    hash(&seed, var_12);
    hash(&seed, var_13);
    hash(&seed, var_14);
    hash(&seed, var_15);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
