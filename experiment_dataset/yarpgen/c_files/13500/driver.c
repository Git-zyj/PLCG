#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_0 = (unsigned short)5060;
_Bool var_2 = (_Bool)0;
unsigned short var_3 = (unsigned short)12546;
_Bool var_8 = (_Bool)0;
unsigned long long int var_9 = 9367546161288631492ULL;
int zero = 0;
unsigned int var_10 = 192719856U;
int var_11 = -189852966;
_Bool var_12 = (_Bool)1;
void init() {
}

void checksum() {
    hash(&seed, var_10);
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
