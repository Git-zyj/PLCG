#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_0 = -837774510;
short var_1 = (short)-15621;
int var_2 = -139419049;
long long int var_3 = 961156105510930739LL;
int var_8 = 1028967786;
signed char var_10 = (signed char)124;
int var_11 = 897607536;
long long int var_12 = -1159278638751058202LL;
int zero = 0;
short var_17 = (short)9778;
unsigned long long int var_18 = 5794899756674674905ULL;
long long int var_19 = 4354673848536807731LL;
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
