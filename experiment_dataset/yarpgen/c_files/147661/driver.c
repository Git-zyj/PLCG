#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_4 = 5548308944181138199LL;
signed char var_5 = (signed char)-27;
short var_6 = (short)32016;
_Bool var_8 = (_Bool)1;
int zero = 0;
long long int var_12 = -1908408434865493802LL;
unsigned long long int var_13 = 16248817133166024886ULL;
int var_14 = 199889272;
void init() {
}

void checksum() {
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
