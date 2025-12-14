#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_0 = (unsigned short)21057;
short var_1 = (short)24487;
unsigned int var_2 = 4029006273U;
_Bool var_9 = (_Bool)1;
unsigned char var_10 = (unsigned char)26;
signed char var_12 = (signed char)21;
int zero = 0;
unsigned char var_14 = (unsigned char)218;
unsigned char var_15 = (unsigned char)40;
long long int var_16 = 7185249696582447740LL;
unsigned long long int var_17 = 12334759380140486061ULL;
void init() {
}

void checksum() {
    hash(&seed, var_14);
    hash(&seed, var_15);
    hash(&seed, var_16);
    hash(&seed, var_17);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
