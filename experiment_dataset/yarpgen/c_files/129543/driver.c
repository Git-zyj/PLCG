#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_0 = 863051136U;
unsigned short var_1 = (unsigned short)32557;
int var_2 = 1623518860;
_Bool var_4 = (_Bool)0;
unsigned long long int var_5 = 965934124269753674ULL;
unsigned short var_8 = (unsigned short)61976;
long long int var_10 = -42619781164303102LL;
unsigned long long int var_11 = 1224606607562262916ULL;
long long int var_14 = 3604336752092010758LL;
_Bool var_16 = (_Bool)1;
unsigned short var_17 = (unsigned short)36524;
int var_18 = -1817179106;
int zero = 0;
int var_19 = -1920522299;
unsigned long long int var_20 = 12385177567495848720ULL;
signed char var_21 = (signed char)51;
unsigned int var_22 = 1466372277U;
unsigned int var_23 = 279712104U;
void init() {
}

void checksum() {
    hash(&seed, var_19);
    hash(&seed, var_20);
    hash(&seed, var_21);
    hash(&seed, var_22);
    hash(&seed, var_23);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
