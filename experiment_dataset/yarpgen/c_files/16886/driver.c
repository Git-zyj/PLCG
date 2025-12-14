#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_0 = -8454694946327868309LL;
int var_3 = -456343748;
unsigned char var_4 = (unsigned char)103;
short var_5 = (short)12147;
unsigned long long int var_8 = 1894818894406109673ULL;
unsigned long long int var_9 = 2993699572059860802ULL;
int zero = 0;
unsigned long long int var_10 = 14679453227696292108ULL;
unsigned long long int var_11 = 4284883818827786748ULL;
void init() {
}

void checksum() {
    hash(&seed, var_10);
    hash(&seed, var_11);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
