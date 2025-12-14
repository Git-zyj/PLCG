#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_0 = (signed char)74;
unsigned long long int var_2 = 5600382674105172084ULL;
signed char var_4 = (signed char)43;
long long int var_6 = -8034002599686489371LL;
long long int var_9 = -121365415393253125LL;
int var_10 = -1308749130;
int zero = 0;
unsigned short var_11 = (unsigned short)51469;
short var_12 = (short)5154;
unsigned int var_13 = 2155437610U;
signed char var_14 = (signed char)-60;
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
