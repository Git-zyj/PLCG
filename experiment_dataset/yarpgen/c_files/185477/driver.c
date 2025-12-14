#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_1 = -1888571002;
long long int var_2 = -6261438228454694311LL;
unsigned long long int var_7 = 5580811773209543118ULL;
long long int var_8 = 3817182559582899154LL;
unsigned char var_9 = (unsigned char)87;
int zero = 0;
unsigned long long int var_14 = 6206116863238380805ULL;
signed char var_15 = (signed char)-43;
unsigned long long int var_16 = 14303426670295531014ULL;
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
