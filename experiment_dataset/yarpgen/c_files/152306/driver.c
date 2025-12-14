#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_0 = 2716106217U;
signed char var_1 = (signed char)-76;
signed char var_4 = (signed char)21;
int var_9 = -1620616526;
int var_10 = -472401331;
unsigned char var_17 = (unsigned char)247;
int zero = 0;
long long int var_18 = 2903633044262448211LL;
long long int var_19 = 3678096620776328616LL;
unsigned int var_20 = 4010970803U;
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
