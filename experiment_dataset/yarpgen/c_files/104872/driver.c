#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_5 = 2008815454;
signed char var_9 = (signed char)8;
_Bool var_15 = (_Bool)1;
int zero = 0;
unsigned long long int var_20 = 9410913143428947467ULL;
long long int var_21 = 3419723204770469610LL;
short var_22 = (short)13926;
void init() {
}

void checksum() {
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
