#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_2 = -2083384561638434356LL;
long long int var_8 = -9031687598937228220LL;
signed char var_9 = (signed char)112;
signed char var_13 = (signed char)94;
unsigned char var_18 = (unsigned char)165;
int zero = 0;
unsigned int var_19 = 3232417521U;
long long int var_20 = -3426485826187968236LL;
unsigned int var_21 = 1131335221U;
signed char var_22 = (signed char)-25;
void init() {
}

void checksum() {
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
