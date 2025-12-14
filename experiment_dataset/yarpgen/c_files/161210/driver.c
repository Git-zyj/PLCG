#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_3 = (signed char)-111;
int var_4 = 2034847170;
long long int var_9 = 2000713805863249120LL;
unsigned long long int var_11 = 163122328863306498ULL;
int zero = 0;
unsigned short var_12 = (unsigned short)62036;
unsigned long long int var_13 = 14850894464546738345ULL;
signed char var_14 = (signed char)-24;
signed char var_15 = (signed char)-111;
void init() {
}

void checksum() {
    hash(&seed, var_12);
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
