#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_0 = (signed char)-24;
signed char var_1 = (signed char)50;
unsigned long long int var_7 = 4995792509966187368ULL;
unsigned long long int var_12 = 12667803095563001361ULL;
int zero = 0;
signed char var_18 = (signed char)85;
signed char var_19 = (signed char)-95;
signed char var_20 = (signed char)53;
int var_21 = 368459195;
void init() {
}

void checksum() {
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
