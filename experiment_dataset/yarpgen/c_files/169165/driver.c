#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_0 = (short)21017;
short var_2 = (short)28068;
unsigned long long int var_9 = 464654860771243605ULL;
int zero = 0;
unsigned int var_19 = 756289130U;
unsigned int var_20 = 3511611454U;
long long int var_21 = 8381244518550356541LL;
long long int var_22 = -3702126054122469165LL;
void init() {
}

void checksum() {
    hash(&seed, var_19);
    hash(&seed, var_20);
    hash(&seed, var_21);
    hash(&seed, var_22);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
