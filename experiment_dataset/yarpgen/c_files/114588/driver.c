#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_0 = 5676388758066160853LL;
unsigned long long int var_2 = 2943198904320715227ULL;
short var_4 = (short)27191;
unsigned int var_8 = 4155434771U;
int zero = 0;
unsigned char var_12 = (unsigned char)129;
unsigned long long int var_13 = 154307956444804820ULL;
unsigned char var_14 = (unsigned char)249;
short var_15 = (short)-29733;
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
