#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_5 = 3372686384683917112LL;
unsigned long long int var_11 = 7831796377053943883ULL;
unsigned long long int var_12 = 11086135049974853816ULL;
int zero = 0;
unsigned short var_18 = (unsigned short)57798;
unsigned int var_19 = 4170533332U;
unsigned long long int var_20 = 18212450828676006942ULL;
unsigned long long int var_21 = 239819849617451823ULL;
void init() {
}

void checksum() {
    hash(&seed, var_18);
    hash(&seed, var_19);
    hash(&seed, var_20);
    hash(&seed, var_21);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
