#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_0 = (short)-28813;
long long int var_2 = 4767841361812146280LL;
_Bool var_4 = (_Bool)0;
int var_5 = -1776838764;
short var_7 = (short)-27563;
int zero = 0;
unsigned long long int var_10 = 3598785305129358643ULL;
short var_11 = (short)-6265;
_Bool var_12 = (_Bool)0;
void init() {
}

void checksum() {
    hash(&seed, var_10);
    hash(&seed, var_11);
    hash(&seed, var_12);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
