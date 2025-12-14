#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_1 = (unsigned short)65195;
unsigned long long int var_2 = 3800691439504929678ULL;
short var_5 = (short)-23673;
unsigned int var_10 = 3583928111U;
int zero = 0;
int var_11 = -1344428106;
unsigned long long int var_12 = 6916804616817494852ULL;
signed char var_13 = (signed char)-76;
void init() {
}

void checksum() {
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
