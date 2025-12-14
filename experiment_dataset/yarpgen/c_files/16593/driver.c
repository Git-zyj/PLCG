#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_0 = -4358793420901817518LL;
unsigned int var_9 = 1869097440U;
long long int var_13 = -1153275430354738614LL;
int zero = 0;
long long int var_18 = 776299013933532814LL;
unsigned long long int var_19 = 2696285230545673830ULL;
unsigned short var_20 = (unsigned short)30218;
int var_21 = 1175232356;
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
