#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_2 = (unsigned short)14245;
unsigned short var_5 = (unsigned short)28269;
unsigned long long int var_7 = 9243036285758274782ULL;
unsigned short var_11 = (unsigned short)54593;
int zero = 0;
unsigned long long int var_18 = 9318562679399568595ULL;
long long int var_19 = 2993022138710712497LL;
unsigned short var_20 = (unsigned short)62338;
void init() {
}

void checksum() {
    hash(&seed, var_18);
    hash(&seed, var_19);
    hash(&seed, var_20);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
