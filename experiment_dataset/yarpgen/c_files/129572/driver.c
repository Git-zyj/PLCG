#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

_Bool var_4 = (_Bool)0;
_Bool var_5 = (_Bool)0;
long long int var_9 = 4842998881166538565LL;
_Bool var_10 = (_Bool)0;
unsigned char var_13 = (unsigned char)88;
int zero = 0;
unsigned int var_20 = 3159868646U;
unsigned long long int var_21 = 12561900937038154669ULL;
unsigned long long int var_22 = 16444305863348884052ULL;
void init() {
}

void checksum() {
    hash(&seed, var_20);
    hash(&seed, var_21);
    hash(&seed, var_22);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
