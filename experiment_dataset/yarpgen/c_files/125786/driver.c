#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_2 = (signed char)16;
unsigned long long int var_5 = 14243782137475686175ULL;
unsigned long long int var_6 = 8596475383919906690ULL;
signed char var_9 = (signed char)-110;
unsigned char var_10 = (unsigned char)223;
unsigned char var_11 = (unsigned char)96;
unsigned long long int var_12 = 1462306201127806913ULL;
unsigned long long int var_16 = 15908590425741739861ULL;
int zero = 0;
signed char var_17 = (signed char)125;
signed char var_18 = (signed char)-14;
signed char var_19 = (signed char)-58;
signed char var_20 = (signed char)-28;
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
