#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_3 = 17900807716792468010ULL;
unsigned long long int var_5 = 12182182774662051385ULL;
unsigned long long int var_8 = 14696131400048657081ULL;
int zero = 0;
unsigned long long int var_15 = 9191782838930598696ULL;
unsigned long long int var_16 = 9989319425115558077ULL;
unsigned long long int var_17 = 9915311438604374466ULL;
unsigned long long int var_18 = 11159561730559908451ULL;
void init() {
}

void checksum() {
    hash(&seed, var_15);
    hash(&seed, var_16);
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
