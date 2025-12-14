#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_1 = 1168464156;
unsigned short var_6 = (unsigned short)2188;
unsigned short var_8 = (unsigned short)60956;
long long int var_9 = -6046475383087806237LL;
unsigned short var_15 = (unsigned short)19106;
int zero = 0;
signed char var_17 = (signed char)-57;
int var_18 = 53874014;
int var_19 = -1807690950;
void init() {
}

void checksum() {
    hash(&seed, var_17);
    hash(&seed, var_18);
    hash(&seed, var_19);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
