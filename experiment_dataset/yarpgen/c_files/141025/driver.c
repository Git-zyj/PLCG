#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_3 = 6815738102114000454ULL;
signed char var_4 = (signed char)-45;
long long int var_5 = -5092334267808877001LL;
unsigned long long int var_7 = 11914688441928425927ULL;
unsigned long long int var_9 = 14561495144120421722ULL;
long long int var_10 = 4311085290107433432LL;
int zero = 0;
unsigned long long int var_11 = 17426418086797413067ULL;
short var_12 = (short)-31275;
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
