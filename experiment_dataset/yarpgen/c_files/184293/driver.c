#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_1 = 9365326064116056070ULL;
unsigned short var_5 = (unsigned short)55445;
signed char var_7 = (signed char)-45;
long long int var_9 = 988366562650856277LL;
_Bool var_10 = (_Bool)0;
signed char var_17 = (signed char)54;
int zero = 0;
int var_19 = 259666854;
unsigned long long int var_20 = 8823360861480106324ULL;
signed char var_21 = (signed char)127;
void init() {
}

void checksum() {
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
