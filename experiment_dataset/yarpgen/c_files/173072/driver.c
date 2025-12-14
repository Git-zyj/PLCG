#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_1 = -5030183076137111332LL;
signed char var_3 = (signed char)-52;
int var_6 = -118358563;
unsigned long long int var_19 = 13167574766751303539ULL;
int zero = 0;
int var_20 = -1989406469;
int var_21 = -13640455;
long long int var_22 = 1561814095717655984LL;
void init() {
}

void checksum() {
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
