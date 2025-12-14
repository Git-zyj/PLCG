#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_0 = 12181001753321072430ULL;
unsigned long long int var_2 = 4958029123673582530ULL;
unsigned long long int var_6 = 16469039994631023941ULL;
unsigned long long int var_9 = 5843307351166841808ULL;
int zero = 0;
unsigned short var_10 = (unsigned short)56286;
unsigned long long int var_11 = 9127362833683318635ULL;
unsigned short var_12 = (unsigned short)31265;
unsigned long long int var_13 = 3230435752706066513ULL;
void init() {
}

void checksum() {
    hash(&seed, var_10);
    hash(&seed, var_11);
    hash(&seed, var_12);
    hash(&seed, var_13);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
