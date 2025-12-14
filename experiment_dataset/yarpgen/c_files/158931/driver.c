#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_1 = -951728151892618052LL;
int var_4 = -1623841921;
unsigned int var_8 = 839730674U;
signed char var_9 = (signed char)62;
signed char var_11 = (signed char)-126;
short var_17 = (short)29435;
int zero = 0;
long long int var_18 = -5381172570311859394LL;
unsigned int var_19 = 3904532313U;
unsigned char var_20 = (unsigned char)117;
void init() {
}

void checksum() {
    hash(&seed, var_18);
    hash(&seed, var_19);
    hash(&seed, var_20);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
