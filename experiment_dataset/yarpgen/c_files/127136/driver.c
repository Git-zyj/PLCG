#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_0 = 18302607053577541819ULL;
unsigned long long int var_5 = 9933967629486061627ULL;
short var_9 = (short)31938;
int zero = 0;
unsigned long long int var_15 = 9949133424293936529ULL;
short var_16 = (short)20406;
unsigned long long int var_17 = 9209640547097141488ULL;
unsigned long long int var_18 = 2043609291915515478ULL;
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
