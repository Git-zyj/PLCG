#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_5 = 5739997946081091525LL;
long long int var_6 = 6955461989074724815LL;
unsigned long long int var_8 = 14035950351193145384ULL;
int var_9 = 1537480051;
int zero = 0;
unsigned int var_16 = 2487126457U;
signed char var_17 = (signed char)92;
long long int var_18 = 5588664149875681306LL;
void init() {
}

void checksum() {
    hash(&seed, var_16);
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
