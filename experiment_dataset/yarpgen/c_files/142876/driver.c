#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_1 = (unsigned short)49090;
unsigned char var_2 = (unsigned char)102;
long long int var_3 = -6114347491642821957LL;
unsigned long long int var_5 = 5108857649413915130ULL;
signed char var_9 = (signed char)-100;
long long int var_10 = 5519160379738451429LL;
int zero = 0;
unsigned long long int var_11 = 9795226170975270084ULL;
unsigned char var_12 = (unsigned char)37;
unsigned long long int var_13 = 8892332874188078802ULL;
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
