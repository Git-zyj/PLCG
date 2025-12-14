#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_0 = 339760543;
unsigned long long int var_3 = 1618328558301010976ULL;
long long int var_4 = 5406263825698488844LL;
signed char var_6 = (signed char)91;
int var_7 = 1935846801;
int var_11 = 2023676782;
_Bool var_14 = (_Bool)0;
unsigned int var_18 = 393073792U;
int zero = 0;
unsigned long long int var_20 = 12571493696758682109ULL;
int var_21 = 1352967086;
void init() {
}

void checksum() {
    hash(&seed, var_20);
    hash(&seed, var_21);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
