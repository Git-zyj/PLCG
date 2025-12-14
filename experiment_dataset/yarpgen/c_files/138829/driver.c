#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_1 = -5909200611602857799LL;
unsigned long long int var_4 = 7924798130744766529ULL;
long long int var_6 = -6739573582603603324LL;
long long int var_8 = -242507483442175491LL;
int zero = 0;
long long int var_11 = -8316273137348314539LL;
unsigned int var_12 = 3243834308U;
int var_13 = 1254758792;
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
