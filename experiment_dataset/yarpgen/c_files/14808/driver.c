#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_2 = (unsigned char)197;
unsigned char var_3 = (unsigned char)217;
unsigned char var_4 = (unsigned char)85;
unsigned long long int var_8 = 2952654994095468288ULL;
long long int var_9 = 2282924266733920217LL;
int zero = 0;
unsigned long long int var_11 = 7850498931828998528ULL;
int var_12 = 415847376;
unsigned int var_13 = 4052648062U;
void init() {
}

void checksum() {
    hash(&seed, var_11);
    hash(&seed, var_12);
    hash(&seed, var_13);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
