#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_2 = 6202010498801023817LL;
unsigned short var_5 = (unsigned short)15999;
unsigned long long int var_9 = 16425232024558667013ULL;
int var_13 = -565746343;
int zero = 0;
unsigned long long int var_17 = 15277316944561868648ULL;
unsigned int var_18 = 813888883U;
void init() {
}

void checksum() {
    hash(&seed, var_17);
    hash(&seed, var_18);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
