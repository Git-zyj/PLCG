#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_3 = 8997198037737963426ULL;
unsigned int var_4 = 1396315790U;
short var_5 = (short)853;
signed char var_8 = (signed char)-19;
unsigned short var_11 = (unsigned short)20779;
long long int var_13 = -727099820895515042LL;
unsigned short var_15 = (unsigned short)22715;
unsigned short var_16 = (unsigned short)54678;
long long int var_17 = 703547244429917083LL;
int zero = 0;
unsigned long long int var_18 = 17092875287106025016ULL;
short var_19 = (short)26261;
unsigned int var_20 = 4101381136U;
unsigned long long int var_21 = 17466201118192442878ULL;
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
