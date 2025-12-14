#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_2 = (unsigned char)218;
unsigned char var_9 = (unsigned char)0;
unsigned char var_10 = (unsigned char)130;
long long int var_12 = -1863154042004791739LL;
signed char var_19 = (signed char)-24;
int zero = 0;
signed char var_20 = (signed char)7;
long long int var_21 = -906765376622789440LL;
_Bool var_22 = (_Bool)0;
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
