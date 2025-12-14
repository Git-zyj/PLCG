#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

_Bool var_1 = (_Bool)0;
unsigned int var_2 = 2386593232U;
int var_3 = 1747753133;
long long int var_5 = -8722979994487771515LL;
long long int var_12 = 2989342055111429043LL;
unsigned long long int var_17 = 4169591232762179200ULL;
int zero = 0;
int var_18 = 168477177;
int var_19 = -58372407;
long long int var_20 = -3150797535379107527LL;
unsigned short var_21 = (unsigned short)31317;
signed char var_22 = (signed char)83;
void init() {
}

void checksum() {
    hash(&seed, var_18);
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
