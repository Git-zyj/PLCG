#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_2 = 13746336089612755811ULL;
unsigned short var_3 = (unsigned short)39723;
unsigned long long int var_4 = 3455551322522498034ULL;
signed char var_6 = (signed char)-40;
unsigned short var_8 = (unsigned short)35439;
int zero = 0;
int var_12 = 705760515;
short var_13 = (short)21720;
unsigned long long int var_14 = 4152735608498627941ULL;
void init() {
}

void checksum() {
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
