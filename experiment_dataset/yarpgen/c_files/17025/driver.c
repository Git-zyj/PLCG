#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_1 = 8197561613090393167LL;
_Bool var_2 = (_Bool)0;
long long int var_4 = 2391547857280870951LL;
signed char var_5 = (signed char)-108;
_Bool var_6 = (_Bool)0;
unsigned int var_7 = 763531977U;
long long int var_8 = -6966524936091361012LL;
unsigned long long int var_10 = 13563132635570999262ULL;
short var_11 = (short)28895;
unsigned char var_13 = (unsigned char)80;
_Bool var_17 = (_Bool)0;
short var_19 = (short)29106;
int zero = 0;
short var_20 = (short)-25366;
unsigned int var_21 = 3107496945U;
short var_22 = (short)19324;
unsigned long long int var_23 = 11325565660313677042ULL;
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
