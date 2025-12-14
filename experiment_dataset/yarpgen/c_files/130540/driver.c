#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_3 = 18034158140731560445ULL;
int var_4 = -386982722;
int var_9 = -567543392;
unsigned short var_11 = (unsigned short)34915;
unsigned long long int var_13 = 11829610463375259217ULL;
int zero = 0;
unsigned int var_15 = 3481402229U;
unsigned long long int var_16 = 11290935497547776980ULL;
int var_17 = 1599634039;
unsigned long long int var_18 = 2220100408318764701ULL;
void init() {
}

void checksum() {
    hash(&seed, var_15);
    hash(&seed, var_16);
    hash(&seed, var_17);
    hash(&seed, var_18);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
