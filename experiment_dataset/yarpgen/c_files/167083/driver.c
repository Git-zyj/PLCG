#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_0 = -1615248673455100941LL;
unsigned long long int var_3 = 5164543063291519760ULL;
unsigned int var_9 = 3054814285U;
int zero = 0;
int var_13 = -1822625144;
unsigned long long int var_14 = 5739963943819531559ULL;
_Bool var_15 = (_Bool)0;
unsigned long long int var_16 = 14676603100648152063ULL;
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
