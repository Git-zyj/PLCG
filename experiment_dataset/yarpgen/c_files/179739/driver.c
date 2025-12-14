#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_0 = 3415790945U;
unsigned int var_7 = 122152263U;
unsigned int var_8 = 4036474457U;
unsigned long long int var_9 = 5515451842759991618ULL;
unsigned long long int var_12 = 4685040473944991818ULL;
unsigned int var_13 = 3222618380U;
unsigned int var_14 = 3616502006U;
unsigned long long int var_17 = 12040336934784720687ULL;
int zero = 0;
unsigned int var_18 = 1404497446U;
unsigned long long int var_19 = 12062577134857900027ULL;
unsigned long long int var_20 = 5251878281921396982ULL;
unsigned int var_21 = 2154344948U;
void init() {
}

void checksum() {
    hash(&seed, var_18);
    hash(&seed, var_19);
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
