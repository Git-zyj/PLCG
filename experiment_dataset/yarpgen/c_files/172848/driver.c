#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_0 = -1652545372;
unsigned long long int var_2 = 8598223020445908751ULL;
unsigned int var_3 = 2575590786U;
unsigned long long int var_6 = 17392970808042348230ULL;
unsigned int var_7 = 1289563997U;
long long int var_9 = 8419948926087905474LL;
unsigned int var_10 = 457256204U;
int zero = 0;
_Bool var_11 = (_Bool)1;
long long int var_12 = -7484331987950271801LL;
unsigned int var_13 = 478327054U;
void init() {
}

void checksum() {
    hash(&seed, var_11);
    hash(&seed, var_12);
    hash(&seed, var_13);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
