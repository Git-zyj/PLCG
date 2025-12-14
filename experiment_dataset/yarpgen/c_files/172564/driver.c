#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_0 = -5508067994823052538LL;
short var_3 = (short)-16191;
_Bool var_6 = (_Bool)0;
unsigned int var_7 = 1215965688U;
short var_9 = (short)-19114;
unsigned char var_10 = (unsigned char)145;
int zero = 0;
short var_11 = (short)-12841;
long long int var_12 = -626645857227172368LL;
void init() {
}

void checksum() {
    hash(&seed, var_11);
    hash(&seed, var_12);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
