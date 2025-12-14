#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_3 = -1225042666;
signed char var_4 = (signed char)-18;
unsigned char var_5 = (unsigned char)192;
unsigned int var_9 = 2254198889U;
long long int var_15 = 4577907466665588134LL;
int zero = 0;
_Bool var_20 = (_Bool)0;
signed char var_21 = (signed char)105;
signed char var_22 = (signed char)-43;
void init() {
}

void checksum() {
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
