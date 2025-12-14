#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

_Bool var_0 = (_Bool)0;
int var_1 = -816475480;
unsigned char var_3 = (unsigned char)135;
signed char var_8 = (signed char)39;
unsigned char var_9 = (unsigned char)255;
signed char var_10 = (signed char)-110;
long long int var_11 = 3551535469253131266LL;
unsigned short var_12 = (unsigned short)8899;
int zero = 0;
int var_13 = -1327850613;
int var_14 = 344714002;
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
