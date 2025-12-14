#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_0 = (unsigned short)17609;
unsigned long long int var_1 = 15186073078545152992ULL;
unsigned long long int var_4 = 9982675996081745452ULL;
_Bool var_7 = (_Bool)0;
_Bool var_9 = (_Bool)1;
int zero = 0;
unsigned int var_16 = 2476958930U;
unsigned short var_17 = (unsigned short)35145;
unsigned int var_18 = 181698987U;
int var_19 = 915365197;
unsigned long long int var_20 = 12241995673131754318ULL;
void init() {
}

void checksum() {
    hash(&seed, var_16);
    hash(&seed, var_17);
    hash(&seed, var_18);
    hash(&seed, var_19);
    hash(&seed, var_20);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
