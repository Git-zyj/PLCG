#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_1 = (unsigned short)44318;
long long int var_3 = -210837605337548961LL;
_Bool var_5 = (_Bool)1;
long long int var_10 = -5117608282813374913LL;
long long int var_12 = -5653447291422408923LL;
unsigned long long int var_15 = 10220595182793537979ULL;
unsigned int var_16 = 1734641212U;
int zero = 0;
unsigned short var_19 = (unsigned short)26542;
long long int var_20 = -5305122753579172600LL;
long long int var_21 = -99748840491275128LL;
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
