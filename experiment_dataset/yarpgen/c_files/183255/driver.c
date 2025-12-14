#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_1 = 4982924134475988487ULL;
unsigned long long int var_9 = 18299970617163397434ULL;
_Bool var_14 = (_Bool)0;
int zero = 0;
unsigned short var_20 = (unsigned short)19684;
long long int var_21 = 5315475846034477080LL;
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
