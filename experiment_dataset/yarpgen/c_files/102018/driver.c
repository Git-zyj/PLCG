#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_4 = 14412914150784793912ULL;
unsigned short var_5 = (unsigned short)41794;
signed char var_7 = (signed char)-67;
unsigned short var_9 = (unsigned short)62674;
_Bool var_10 = (_Bool)0;
unsigned long long int var_11 = 16747605444996503087ULL;
long long int var_12 = 4793617999081283485LL;
unsigned int var_17 = 3358518561U;
int zero = 0;
unsigned long long int var_18 = 8591737191180965245ULL;
unsigned long long int var_19 = 15645880796157980199ULL;
_Bool var_20 = (_Bool)0;
unsigned int var_21 = 3540703994U;
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
