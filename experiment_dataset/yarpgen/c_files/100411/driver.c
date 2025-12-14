#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_9 = 5632507254353408490LL;
long long int var_14 = -6984406188897916923LL;
int zero = 0;
int var_15 = 1173115138;
unsigned long long int var_16 = 3672390497680137794ULL;
unsigned long long int var_17 = 4561164480930358013ULL;
int var_18 = -511259456;
void init() {
}

void checksum() {
    hash(&seed, var_15);
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
