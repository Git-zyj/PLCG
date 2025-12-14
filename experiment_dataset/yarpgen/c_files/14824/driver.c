#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_9 = (unsigned char)122;
unsigned long long int var_18 = 6117745184140623043ULL;
long long int var_19 = 2793977690486974855LL;
int zero = 0;
short var_20 = (short)-12759;
unsigned int var_21 = 3468530898U;
long long int var_22 = -4325164976078122076LL;
signed char var_23 = (signed char)10;
unsigned long long int var_24 = 17198694145600858420ULL;
void init() {
}

void checksum() {
    hash(&seed, var_20);
    hash(&seed, var_21);
    hash(&seed, var_22);
    hash(&seed, var_23);
    hash(&seed, var_24);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
