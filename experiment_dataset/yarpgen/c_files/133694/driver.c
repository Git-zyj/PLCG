#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_1 = 393696322;
int var_6 = -852160301;
int var_8 = -13061908;
long long int var_9 = -2160335695392152464LL;
unsigned long long int var_15 = 13768888621522563826ULL;
signed char var_17 = (signed char)126;
int zero = 0;
int var_19 = -944641892;
signed char var_20 = (signed char)-53;
unsigned char var_21 = (unsigned char)79;
long long int var_22 = 7957034788854782411LL;
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
