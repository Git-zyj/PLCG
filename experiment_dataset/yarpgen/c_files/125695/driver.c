#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_0 = 864464339;
int var_5 = 1801234274;
unsigned long long int var_6 = 11846179155693927616ULL;
int var_7 = 1924861021;
int var_9 = 667233410;
int zero = 0;
signed char var_10 = (signed char)-37;
short var_11 = (short)17694;
long long int var_12 = -6501885590520878412LL;
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
