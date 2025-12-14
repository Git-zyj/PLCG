#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_7 = (unsigned short)59;
int var_8 = -1275602291;
unsigned int var_9 = 3009536301U;
unsigned short var_10 = (unsigned short)12483;
int var_12 = 685542767;
int zero = 0;
signed char var_18 = (signed char)-79;
signed char var_19 = (signed char)-116;
signed char var_20 = (signed char)25;
void init() {
}

void checksum() {
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
