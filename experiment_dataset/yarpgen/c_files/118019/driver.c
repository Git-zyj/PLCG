#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_4 = 5364867476614383960LL;
int var_10 = 928424539;
long long int var_11 = -5450827664796741634LL;
long long int var_14 = 5413322611979147909LL;
signed char var_16 = (signed char)-90;
long long int var_17 = -105242890388762947LL;
int zero = 0;
unsigned long long int var_19 = 3572904167066966103ULL;
signed char var_20 = (signed char)-9;
void init() {
}

void checksum() {
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
