#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_0 = (short)11882;
unsigned long long int var_1 = 3374658969704790260ULL;
short var_2 = (short)20075;
short var_3 = (short)25649;
unsigned long long int var_4 = 10417788019781463185ULL;
signed char var_7 = (signed char)-44;
short var_8 = (short)974;
short var_9 = (short)17119;
unsigned long long int var_11 = 12309624895291777913ULL;
int zero = 0;
unsigned long long int var_13 = 4096657712700183164ULL;
signed char var_14 = (signed char)-26;
short var_15 = (short)30632;
void init() {
}

void checksum() {
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
