#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_0 = 717994674518443694LL;
int var_2 = -1557718981;
long long int var_3 = -738914126997552376LL;
_Bool var_4 = (_Bool)0;
long long int var_5 = -8062035296836098484LL;
unsigned int var_8 = 4268655296U;
unsigned char var_11 = (unsigned char)120;
unsigned char var_13 = (unsigned char)159;
unsigned long long int var_16 = 17974425557884242783ULL;
signed char var_17 = (signed char)-67;
int zero = 0;
unsigned long long int var_19 = 11084681258220157693ULL;
unsigned long long int var_20 = 9336307193972721619ULL;
_Bool var_21 = (_Bool)1;
_Bool var_22 = (_Bool)0;
void init() {
}

void checksum() {
    hash(&seed, var_19);
    hash(&seed, var_20);
    hash(&seed, var_21);
    hash(&seed, var_22);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
