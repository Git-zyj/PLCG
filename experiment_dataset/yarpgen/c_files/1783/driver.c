#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_0 = -6226460297777204066LL;
long long int var_1 = 7844613828601077925LL;
long long int var_2 = 4242207726459778531LL;
long long int var_9 = -3110082605891297242LL;
int zero = 0;
unsigned long long int var_11 = 17001811592391053158ULL;
long long int var_12 = 5133007930318357286LL;
void init() {
}

void checksum() {
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
