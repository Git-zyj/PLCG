#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_0 = (signed char)-53;
int var_3 = -1784833687;
unsigned long long int var_4 = 16835039276734052300ULL;
_Bool var_5 = (_Bool)0;
_Bool var_6 = (_Bool)0;
int var_9 = -852535534;
unsigned long long int var_10 = 1113533394444238329ULL;
int zero = 0;
unsigned char var_13 = (unsigned char)95;
short var_14 = (short)-9473;
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
