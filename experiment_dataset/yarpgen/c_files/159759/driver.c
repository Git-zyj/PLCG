#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_0 = (unsigned short)15024;
unsigned long long int var_1 = 12790022372190659923ULL;
unsigned short var_2 = (unsigned short)56752;
unsigned char var_3 = (unsigned char)154;
unsigned char var_4 = (unsigned char)30;
unsigned int var_5 = 3857573433U;
unsigned int var_6 = 133134526U;
long long int var_7 = 3015858371216499814LL;
long long int var_8 = 1263603164873898926LL;
signed char var_9 = (signed char)118;
int zero = 0;
unsigned long long int var_10 = 16362253338467372118ULL;
signed char var_11 = (signed char)-52;
_Bool var_12 = (_Bool)1;
void init() {
}

void checksum() {
    hash(&seed, var_10);
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
