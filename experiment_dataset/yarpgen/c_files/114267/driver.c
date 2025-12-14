#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_0 = 2981843783U;
long long int var_2 = 4352157836440614834LL;
unsigned int var_3 = 2644250444U;
long long int var_8 = 7740570011414456085LL;
unsigned char var_9 = (unsigned char)39;
int zero = 0;
long long int var_17 = 3994616550857812677LL;
unsigned int var_18 = 2893955245U;
long long int var_19 = 8743343734876036008LL;
short var_20 = (short)29159;
unsigned short var_21 = (unsigned short)21872;
void init() {
}

void checksum() {
    hash(&seed, var_17);
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
