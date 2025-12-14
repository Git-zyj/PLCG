#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_2 = -16259193;
unsigned int var_7 = 933532365U;
int var_9 = -55762828;
int var_10 = 312760564;
unsigned long long int var_12 = 793258827323127037ULL;
unsigned long long int var_14 = 12687407497679058064ULL;
int zero = 0;
signed char var_20 = (signed char)104;
long long int var_21 = -5489021053621884976LL;
signed char var_22 = (signed char)13;
_Bool var_23 = (_Bool)1;
_Bool var_24 = (_Bool)1;
void init() {
}

void checksum() {
    hash(&seed, var_20);
    hash(&seed, var_21);
    hash(&seed, var_22);
    hash(&seed, var_23);
    hash(&seed, var_24);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
