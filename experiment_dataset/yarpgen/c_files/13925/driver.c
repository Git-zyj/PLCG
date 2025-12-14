#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_0 = (signed char)-3;
long long int var_1 = -4035829157579052036LL;
unsigned short var_6 = (unsigned short)12104;
unsigned long long int var_7 = 5654856748157527205ULL;
long long int var_8 = -6844244425926647521LL;
unsigned short var_9 = (unsigned short)10448;
signed char var_10 = (signed char)-105;
int zero = 0;
unsigned char var_11 = (unsigned char)64;
int var_12 = 1307816111;
void init() {
}

void checksum() {
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
