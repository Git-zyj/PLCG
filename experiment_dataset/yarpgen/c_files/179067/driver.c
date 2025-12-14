#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_5 = (unsigned short)53308;
int var_7 = 1201938292;
signed char var_13 = (signed char)-51;
int zero = 0;
signed char var_18 = (signed char)-103;
unsigned long long int var_19 = 2546131447064664669ULL;
int var_20 = -1174258210;
unsigned long long int var_21 = 7818885202868633158ULL;
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
