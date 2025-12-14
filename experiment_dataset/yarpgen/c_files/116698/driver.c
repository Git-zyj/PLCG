#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_2 = (short)-16614;
short var_6 = (short)22455;
long long int var_8 = -3424573905107769646LL;
unsigned int var_9 = 2034336390U;
int zero = 0;
unsigned char var_17 = (unsigned char)188;
long long int var_18 = -4481468686602468913LL;
_Bool var_19 = (_Bool)1;
void init() {
}

void checksum() {
    hash(&seed, var_17);
    hash(&seed, var_18);
    hash(&seed, var_19);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
