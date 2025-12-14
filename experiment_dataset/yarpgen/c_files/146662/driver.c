#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_2 = 14765539981077559565ULL;
unsigned char var_4 = (unsigned char)102;
unsigned short var_5 = (unsigned short)30760;
_Bool var_8 = (_Bool)1;
int zero = 0;
short var_10 = (short)1245;
int var_11 = -1022928954;
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
