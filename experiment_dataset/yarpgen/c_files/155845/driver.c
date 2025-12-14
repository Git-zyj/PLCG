#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_0 = 3640800264U;
signed char var_1 = (signed char)15;
unsigned long long int var_2 = 5211207521856015562ULL;
int var_3 = 843335476;
short var_4 = (short)-7095;
signed char var_5 = (signed char)40;
unsigned long long int var_6 = 11593604753792470925ULL;
signed char var_7 = (signed char)-54;
unsigned long long int var_9 = 2810877938921290819ULL;
int zero = 0;
long long int var_10 = -6098815212392331115LL;
signed char var_11 = (signed char)78;
signed char var_12 = (signed char)-94;
short var_13 = (short)5650;
void init() {
}

void checksum() {
    hash(&seed, var_10);
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
