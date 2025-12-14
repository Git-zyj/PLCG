#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_1 = (short)-22088;
long long int var_6 = 6225909261944243868LL;
long long int var_9 = 8843253953737478048LL;
int var_11 = 949003825;
unsigned long long int var_13 = 13181627430523701079ULL;
unsigned int var_17 = 4251972422U;
int zero = 0;
int var_18 = 621802004;
signed char var_19 = (signed char)-40;
unsigned int var_20 = 3386367052U;
int var_21 = 208178721;
unsigned int var_22 = 1547779698U;
void init() {
}

void checksum() {
    hash(&seed, var_18);
    hash(&seed, var_19);
    hash(&seed, var_20);
    hash(&seed, var_21);
    hash(&seed, var_22);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
