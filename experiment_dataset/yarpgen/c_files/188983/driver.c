#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_1 = 3153586989995196682LL;
unsigned int var_3 = 3416248888U;
int var_6 = 157927475;
short var_8 = (short)31586;
int zero = 0;
unsigned long long int var_11 = 14997681799986984545ULL;
int var_12 = -630221965;
signed char var_13 = (signed char)-112;
signed char var_14 = (signed char)32;
void init() {
}

void checksum() {
    hash(&seed, var_11);
    hash(&seed, var_12);
    hash(&seed, var_13);
    hash(&seed, var_14);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
