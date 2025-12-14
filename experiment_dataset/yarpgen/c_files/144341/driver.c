#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_5 = 1717262189839756108ULL;
unsigned long long int var_9 = 2042893076190641590ULL;
unsigned long long int var_11 = 5229365508831541607ULL;
unsigned long long int var_16 = 5713556833472307871ULL;
unsigned long long int var_17 = 11425686887647497404ULL;
int zero = 0;
unsigned long long int var_18 = 14177106720676814311ULL;
unsigned long long int var_19 = 15226592731876818960ULL;
unsigned long long int var_20 = 9632029047236557188ULL;
void init() {
}

void checksum() {
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
