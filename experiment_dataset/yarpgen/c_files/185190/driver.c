#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_1 = (unsigned short)64490;
int var_3 = -197524628;
signed char var_8 = (signed char)-98;
unsigned char var_10 = (unsigned char)98;
int var_12 = 1605986237;
unsigned short var_13 = (unsigned short)1793;
unsigned long long int var_14 = 2132512599579956453ULL;
int zero = 0;
_Bool var_17 = (_Bool)1;
unsigned long long int var_18 = 2685695042167103727ULL;
signed char var_19 = (signed char)-113;
unsigned short var_20 = (unsigned short)25887;
void init() {
}

void checksum() {
    hash(&seed, var_17);
    hash(&seed, var_18);
    hash(&seed, var_19);
    hash(&seed, var_20);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
