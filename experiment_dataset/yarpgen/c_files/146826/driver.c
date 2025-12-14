#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

_Bool var_1 = (_Bool)0;
unsigned long long int var_3 = 7519942645391113602ULL;
int var_4 = 665319130;
int var_8 = 56850818;
short var_9 = (short)4908;
int zero = 0;
unsigned long long int var_11 = 13659773459064490610ULL;
unsigned long long int var_12 = 4868131623101644152ULL;
signed char var_13 = (signed char)-84;
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
