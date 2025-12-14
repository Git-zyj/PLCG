#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_2 = (unsigned short)21405;
unsigned long long int var_6 = 4825978243304537154ULL;
_Bool var_9 = (_Bool)0;
int zero = 0;
unsigned char var_13 = (unsigned char)33;
long long int var_14 = 7330842801188638137LL;
unsigned int var_15 = 2268322354U;
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
