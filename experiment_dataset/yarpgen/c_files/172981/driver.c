#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_3 = -678722033188267367LL;
signed char var_9 = (signed char)121;
short var_11 = (short)3958;
unsigned long long int var_13 = 18298383813097079603ULL;
short var_15 = (short)11663;
int zero = 0;
signed char var_19 = (signed char)-95;
int var_20 = 271469518;
short var_21 = (short)31516;
void init() {
}

void checksum() {
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
