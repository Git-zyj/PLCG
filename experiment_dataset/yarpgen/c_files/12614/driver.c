#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_0 = 1541887090;
signed char var_5 = (signed char)-29;
long long int var_7 = 2304525903217782884LL;
short var_8 = (short)-20086;
unsigned int var_9 = 3015678663U;
int zero = 0;
short var_13 = (short)-28638;
unsigned long long int var_14 = 7237214801880770755ULL;
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
