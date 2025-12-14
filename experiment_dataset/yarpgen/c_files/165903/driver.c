#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_1 = (short)-29439;
signed char var_2 = (signed char)43;
unsigned int var_3 = 307840138U;
signed char var_4 = (signed char)-77;
signed char var_5 = (signed char)41;
unsigned int var_8 = 4009493808U;
signed char var_9 = (signed char)-39;
int zero = 0;
short var_11 = (short)-8875;
unsigned long long int var_12 = 9212403901487768327ULL;
unsigned int var_13 = 4126890675U;
void init() {
}

void checksum() {
    hash(&seed, var_11);
    hash(&seed, var_12);
    hash(&seed, var_13);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
