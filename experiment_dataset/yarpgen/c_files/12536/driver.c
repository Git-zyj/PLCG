#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_1 = (short)7903;
unsigned short var_7 = (unsigned short)36488;
unsigned long long int var_13 = 9251148391017561672ULL;
int zero = 0;
int var_17 = 1484653147;
long long int var_18 = 6747557175540809523LL;
signed char var_19 = (signed char)90;
unsigned long long int var_20 = 13234332229482380300ULL;
void init() {
}

void checksum() {
    hash(&seed, var_17);
    hash(&seed, var_18);
    hash(&seed, var_19);
    hash(&seed, var_20);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
