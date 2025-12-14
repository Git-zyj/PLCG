#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

_Bool var_1 = (_Bool)1;
unsigned char var_2 = (unsigned char)111;
unsigned char var_4 = (unsigned char)100;
long long int var_7 = 5136165978873358319LL;
signed char var_8 = (signed char)-76;
unsigned int var_9 = 2092608984U;
signed char var_13 = (signed char)-59;
unsigned long long int var_14 = 7092497264063801733ULL;
unsigned char var_16 = (unsigned char)36;
int zero = 0;
_Bool var_18 = (_Bool)1;
int var_19 = -665070531;
unsigned int var_20 = 1552379116U;
unsigned int var_21 = 3354186851U;
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
