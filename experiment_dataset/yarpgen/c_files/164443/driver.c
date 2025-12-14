#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_1 = -4397920266315616170LL;
unsigned int var_3 = 524855939U;
long long int var_4 = -8194209044794998700LL;
unsigned char var_5 = (unsigned char)77;
int var_6 = -1765128549;
long long int var_8 = 2461241167886306935LL;
unsigned char var_9 = (unsigned char)145;
_Bool var_11 = (_Bool)0;
int zero = 0;
unsigned char var_13 = (unsigned char)69;
unsigned char var_14 = (unsigned char)39;
unsigned char var_15 = (unsigned char)27;
void init() {
}

void checksum() {
    hash(&seed, var_13);
    hash(&seed, var_14);
    hash(&seed, var_15);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
