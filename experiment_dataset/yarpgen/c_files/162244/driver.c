#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_2 = (signed char)-94;
int var_9 = 1112915366;
signed char var_12 = (signed char)102;
_Bool var_14 = (_Bool)1;
int zero = 0;
unsigned char var_18 = (unsigned char)213;
signed char var_19 = (signed char)24;
long long int var_20 = 8612708234400823489LL;
_Bool var_21 = (_Bool)0;
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
