#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

_Bool var_2 = (_Bool)1;
signed char var_4 = (signed char)-72;
unsigned short var_5 = (unsigned short)35070;
_Bool var_6 = (_Bool)0;
unsigned char var_7 = (unsigned char)117;
signed char var_9 = (signed char)-85;
int zero = 0;
int var_11 = 2088217368;
_Bool var_12 = (_Bool)0;
unsigned int var_13 = 729315059U;
unsigned long long int var_14 = 15529216166074736294ULL;
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
