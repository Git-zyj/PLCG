#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_3 = 2018669232748617720LL;
unsigned char var_4 = (unsigned char)50;
unsigned char var_6 = (unsigned char)188;
int var_10 = 980005072;
short var_11 = (short)31177;
unsigned long long int var_13 = 6730841114743500085ULL;
int zero = 0;
unsigned short var_20 = (unsigned short)59921;
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
