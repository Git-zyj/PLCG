#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_0 = (signed char)110;
unsigned short var_2 = (unsigned short)31820;
unsigned long long int var_5 = 1515616298715763414ULL;
unsigned short var_8 = (unsigned short)31974;
unsigned char var_9 = (unsigned char)163;
unsigned char var_10 = (unsigned char)33;
int zero = 0;
unsigned char var_11 = (unsigned char)212;
short var_12 = (short)3011;
unsigned long long int var_13 = 8735891115799986867ULL;
unsigned char var_14 = (unsigned char)43;
void init() {
}

void checksum() {
    hash(&seed, var_11);
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
