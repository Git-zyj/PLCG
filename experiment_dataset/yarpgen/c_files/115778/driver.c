#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_0 = 2959783227102105958LL;
unsigned short var_2 = (unsigned short)62367;
unsigned long long int var_3 = 7541276337141902032ULL;
unsigned long long int var_5 = 16139919680190665677ULL;
int var_10 = -668234282;
signed char var_11 = (signed char)-59;
int zero = 0;
long long int var_14 = 6869374877283323335LL;
unsigned short var_15 = (unsigned short)20375;
unsigned short var_16 = (unsigned short)14081;
void init() {
}

void checksum() {
    hash(&seed, var_14);
    hash(&seed, var_15);
    hash(&seed, var_16);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
