#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_0 = 354157197695024180ULL;
unsigned int var_1 = 3997986220U;
unsigned char var_4 = (unsigned char)118;
unsigned int var_6 = 645543572U;
unsigned short var_9 = (unsigned short)799;
unsigned int var_11 = 319612047U;
int zero = 0;
unsigned long long int var_12 = 15635386436656848481ULL;
signed char var_13 = (signed char)-16;
unsigned long long int var_14 = 8939202792586449413ULL;
_Bool var_15 = (_Bool)1;
void init() {
}

void checksum() {
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
