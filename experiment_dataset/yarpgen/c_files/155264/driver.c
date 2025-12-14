#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_0 = (signed char)117;
long long int var_1 = -7181105553073458069LL;
signed char var_3 = (signed char)74;
long long int var_4 = -7521967407123131257LL;
signed char var_6 = (signed char)-100;
unsigned char var_7 = (unsigned char)34;
signed char var_9 = (signed char)118;
unsigned int var_10 = 1834369735U;
int zero = 0;
unsigned long long int var_11 = 14904484360588956053ULL;
unsigned long long int var_12 = 14585305801044783293ULL;
short var_13 = (short)-4072;
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
