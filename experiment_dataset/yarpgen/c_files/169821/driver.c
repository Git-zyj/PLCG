#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_2 = (signed char)-109;
long long int var_8 = 8122149323334752325LL;
int var_10 = 848311758;
unsigned short var_11 = (unsigned short)59685;
_Bool var_13 = (_Bool)0;
int zero = 0;
int var_16 = -1725351774;
unsigned char var_17 = (unsigned char)228;
unsigned long long int var_18 = 16527887807340875371ULL;
void init() {
}

void checksum() {
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
