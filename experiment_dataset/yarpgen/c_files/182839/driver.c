#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_5 = (unsigned short)53242;
int var_7 = 266830071;
_Bool var_10 = (_Bool)0;
unsigned short var_14 = (unsigned short)15003;
int zero = 0;
unsigned short var_17 = (unsigned short)63208;
unsigned long long int var_18 = 13469912459040792932ULL;
void init() {
}

void checksum() {
    hash(&seed, var_17);
    hash(&seed, var_18);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
