#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_3 = (short)20555;
unsigned long long int var_8 = 7073077371573970569ULL;
unsigned long long int var_12 = 1884950719856696673ULL;
int var_17 = 808354514;
int zero = 0;
long long int var_18 = 3863054140610150268LL;
signed char var_19 = (signed char)39;
unsigned long long int var_20 = 16161014114520100057ULL;
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
