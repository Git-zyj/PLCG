#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_0 = (short)23908;
unsigned long long int var_2 = 12609491565076213848ULL;
signed char var_3 = (signed char)-117;
short var_5 = (short)-32444;
signed char var_7 = (signed char)-68;
short var_9 = (short)-465;
short var_10 = (short)32461;
int zero = 0;
long long int var_11 = 4509813656034912464LL;
unsigned int var_12 = 523325796U;
unsigned int var_13 = 3738020788U;
void init() {
}

void checksum() {
    hash(&seed, var_11);
    hash(&seed, var_12);
    hash(&seed, var_13);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
