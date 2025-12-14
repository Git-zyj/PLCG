#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_3 = 5852733512317396673LL;
unsigned long long int var_5 = 14853646904524721392ULL;
int zero = 0;
int var_19 = 839011495;
long long int var_20 = 4874533484510533345LL;
long long int var_21 = 7007061256051667789LL;
long long int var_22 = -7311174227412592304LL;
void init() {
}

void checksum() {
    hash(&seed, var_19);
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
