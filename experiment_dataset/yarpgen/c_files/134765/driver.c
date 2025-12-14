#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_1 = 11935464248286058434ULL;
signed char var_2 = (signed char)-121;
unsigned long long int var_6 = 3718686180012456992ULL;
unsigned char var_8 = (unsigned char)9;
unsigned long long int var_9 = 2348337368753246095ULL;
int zero = 0;
int var_11 = 2089244632;
unsigned long long int var_12 = 6985077275178195079ULL;
signed char var_13 = (signed char)-101;
_Bool var_14 = (_Bool)1;
void init() {
}

void checksum() {
    hash(&seed, var_11);
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
