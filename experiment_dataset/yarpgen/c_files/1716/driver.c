#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_1 = 7986459488997780619ULL;
signed char var_9 = (signed char)70;
_Bool var_14 = (_Bool)0;
unsigned long long int var_15 = 6095667644758831453ULL;
int zero = 0;
unsigned short var_18 = (unsigned short)23138;
unsigned char var_19 = (unsigned char)65;
long long int var_20 = -2721097937094043386LL;
unsigned int var_21 = 3368959806U;
_Bool var_22 = (_Bool)0;
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
