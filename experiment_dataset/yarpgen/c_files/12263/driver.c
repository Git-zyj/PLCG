#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_0 = (short)-15683;
unsigned long long int var_1 = 15156186545037081695ULL;
unsigned long long int var_2 = 8310720996814991412ULL;
signed char var_9 = (signed char)8;
int zero = 0;
int var_10 = 1507742146;
signed char var_11 = (signed char)-30;
_Bool var_12 = (_Bool)0;
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
