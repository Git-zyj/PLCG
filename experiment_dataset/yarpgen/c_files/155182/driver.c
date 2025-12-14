#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_0 = 3100990851U;
signed char var_1 = (signed char)-57;
unsigned long long int var_2 = 3790908006325140952ULL;
int var_3 = 1554939154;
long long int var_4 = 810408512265245593LL;
unsigned long long int var_5 = 1317990369694999095ULL;
unsigned long long int var_6 = 3856304418677677475ULL;
unsigned long long int var_7 = 4003453183892051306ULL;
_Bool var_11 = (_Bool)1;
int zero = 0;
signed char var_12 = (signed char)-24;
unsigned long long int var_13 = 8083350322801891152ULL;
unsigned long long int var_14 = 5473496605021008897ULL;
void init() {
}

void checksum() {
    hash(&seed, var_12);
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
