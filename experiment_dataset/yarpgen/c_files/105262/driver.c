#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_1 = 11965670310106772935ULL;
unsigned short var_2 = (unsigned short)40540;
unsigned long long int var_9 = 4923643030141505945ULL;
signed char var_10 = (signed char)13;
int zero = 0;
unsigned int var_12 = 3715938319U;
signed char var_13 = (signed char)-100;
void init() {
}

void checksum() {
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
