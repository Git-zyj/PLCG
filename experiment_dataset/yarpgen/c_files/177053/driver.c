#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_0 = 11059329164581394098ULL;
_Bool var_8 = (_Bool)0;
int var_11 = 3478960;
int zero = 0;
unsigned long long int var_17 = 6096131055350500425ULL;
unsigned int var_18 = 1252361975U;
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
