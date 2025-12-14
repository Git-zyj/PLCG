#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

_Bool var_1 = (_Bool)1;
_Bool var_4 = (_Bool)1;
unsigned char var_5 = (unsigned char)184;
long long int var_9 = -3415493783247503094LL;
long long int var_11 = 269162613252770797LL;
unsigned short var_12 = (unsigned short)41512;
unsigned short var_13 = (unsigned short)20066;
int zero = 0;
short var_20 = (short)22331;
unsigned short var_21 = (unsigned short)55965;
unsigned long long int var_22 = 7350428330767460816ULL;
unsigned char var_23 = (unsigned char)37;
void init() {
}

void checksum() {
    hash(&seed, var_20);
    hash(&seed, var_21);
    hash(&seed, var_22);
    hash(&seed, var_23);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
