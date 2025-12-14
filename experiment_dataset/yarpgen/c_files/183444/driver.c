#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_2 = 7485205443478432870ULL;
unsigned long long int var_6 = 11234995269654224638ULL;
unsigned long long int var_7 = 997391024907030087ULL;
int zero = 0;
unsigned char var_12 = (unsigned char)102;
int var_13 = 345085527;
_Bool var_14 = (_Bool)0;
void init() {
}

void checksum() {
    hash(&seed, var_12);
    hash(&seed, var_13);
    hash(&seed, var_14);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
