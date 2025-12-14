#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_0 = 10454573882431843939ULL;
unsigned short var_7 = (unsigned short)47676;
signed char var_8 = (signed char)-76;
unsigned char var_9 = (unsigned char)43;
_Bool var_10 = (_Bool)0;
int zero = 0;
unsigned int var_12 = 4084272566U;
unsigned char var_13 = (unsigned char)117;
unsigned int var_14 = 534230509U;
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
