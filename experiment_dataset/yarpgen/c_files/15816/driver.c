#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_2 = (short)21629;
unsigned short var_7 = (unsigned short)15628;
int zero = 0;
int var_13 = -1411458406;
unsigned long long int var_14 = 9355783170596715720ULL;
_Bool var_15 = (_Bool)0;
unsigned long long int var_16 = 5115599829504870114ULL;
void init() {
}

void checksum() {
    hash(&seed, var_13);
    hash(&seed, var_14);
    hash(&seed, var_15);
    hash(&seed, var_16);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
