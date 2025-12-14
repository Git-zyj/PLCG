#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_1 = 5320800194116029783LL;
long long int var_3 = 7108322002960112802LL;
long long int var_8 = 5047920024098058852LL;
unsigned short var_10 = (unsigned short)47821;
signed char var_12 = (signed char)-89;
long long int var_13 = 3789187591861606939LL;
int zero = 0;
signed char var_14 = (signed char)-76;
int var_15 = -990840843;
signed char var_16 = (signed char)101;
void init() {
}

void checksum() {
    hash(&seed, var_14);
    hash(&seed, var_15);
    hash(&seed, var_16);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
