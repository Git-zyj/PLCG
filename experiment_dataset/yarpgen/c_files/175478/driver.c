#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_4 = (unsigned char)22;
unsigned short var_6 = (unsigned short)29148;
signed char var_7 = (signed char)-43;
long long int var_9 = 1305627866330975879LL;
unsigned long long int var_12 = 15882009193270955781ULL;
long long int var_18 = 6709437286461488523LL;
int zero = 0;
unsigned long long int var_20 = 12418575377657003722ULL;
_Bool var_21 = (_Bool)0;
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
