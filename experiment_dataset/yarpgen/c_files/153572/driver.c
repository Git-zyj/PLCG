#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_0 = 3889503079776175526ULL;
unsigned int var_6 = 2788560437U;
long long int var_7 = 8513702929153744854LL;
unsigned int var_11 = 2305335642U;
int var_13 = -932435823;
unsigned short var_16 = (unsigned short)55031;
int zero = 0;
unsigned char var_19 = (unsigned char)222;
unsigned int var_20 = 3164840293U;
void init() {
}

void checksum() {
    hash(&seed, var_19);
    hash(&seed, var_20);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
