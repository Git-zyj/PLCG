#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_2 = 17817704394353335467ULL;
signed char var_8 = (signed char)-54;
unsigned long long int var_9 = 16070592811886780352ULL;
_Bool var_10 = (_Bool)0;
int zero = 0;
unsigned char var_13 = (unsigned char)195;
signed char var_14 = (signed char)-12;
void init() {
}

void checksum() {
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
