#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_0 = -207305316;
int var_4 = 368316859;
signed char var_6 = (signed char)-38;
unsigned int var_7 = 619208165U;
long long int var_14 = -4578019356027196522LL;
signed char var_15 = (signed char)-82;
int zero = 0;
long long int var_16 = -6139304441163492211LL;
long long int var_17 = 3289412631249233225LL;
long long int var_18 = 8583294340234490124LL;
unsigned short var_19 = (unsigned short)21892;
unsigned long long int var_20 = 3836944788642309079ULL;
unsigned int var_21 = 652757155U;
void init() {
}

void checksum() {
    hash(&seed, var_16);
    hash(&seed, var_17);
    hash(&seed, var_18);
    hash(&seed, var_19);
    hash(&seed, var_20);
    hash(&seed, var_21);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
