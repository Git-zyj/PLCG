#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_0 = 10840632747008812286ULL;
signed char var_3 = (signed char)9;
signed char var_4 = (signed char)115;
unsigned long long int var_5 = 12408800509412623049ULL;
unsigned long long int var_6 = 11298796784700402222ULL;
unsigned long long int var_7 = 1463710030952315574ULL;
unsigned long long int var_8 = 191730277667618934ULL;
unsigned long long int var_9 = 15447896096574843663ULL;
int zero = 0;
unsigned long long int var_10 = 3831681374977863201ULL;
unsigned long long int var_11 = 234097154169207485ULL;
signed char var_12 = (signed char)75;
void init() {
}

void checksum() {
    hash(&seed, var_10);
    hash(&seed, var_11);
    hash(&seed, var_12);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
