#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_0 = (short)-27415;
signed char var_2 = (signed char)-91;
unsigned long long int var_4 = 12480304681161355689ULL;
long long int var_9 = -3999564492395112650LL;
unsigned char var_10 = (unsigned char)189;
long long int var_12 = 8490126451008092533LL;
int zero = 0;
int var_13 = 121898225;
int var_14 = 1668687653;
void init() {
}

void checksum() {
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
