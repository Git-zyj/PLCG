#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_1 = (signed char)-2;
unsigned short var_2 = (unsigned short)24229;
unsigned int var_4 = 1923021948U;
short var_7 = (short)-22941;
unsigned long long int var_8 = 7203485934147819725ULL;
unsigned int var_9 = 1674717682U;
signed char var_11 = (signed char)-97;
unsigned short var_12 = (unsigned short)49852;
int zero = 0;
unsigned int var_13 = 1152213615U;
long long int var_14 = -100583463803339226LL;
unsigned short var_15 = (unsigned short)64203;
void init() {
}

void checksum() {
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
