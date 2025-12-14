#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_0 = (short)-9527;
signed char var_2 = (signed char)-123;
unsigned char var_5 = (unsigned char)69;
unsigned long long int var_6 = 3003508211201471108ULL;
unsigned int var_7 = 3628747669U;
int var_8 = 2029837468;
unsigned int var_9 = 1449606143U;
long long int var_11 = 8756414869807917473LL;
int zero = 0;
unsigned long long int var_12 = 14224561703607744932ULL;
unsigned long long int var_13 = 14484138931230641812ULL;
unsigned int var_14 = 1148654742U;
void init() {
}

void checksum() {
    hash(&seed, var_12);
    hash(&seed, var_13);
    hash(&seed, var_14);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
