#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_0 = 5274253128202914161ULL;
unsigned int var_2 = 2144321619U;
int var_3 = 875513883;
unsigned long long int var_4 = 2974720785017610795ULL;
int var_7 = -1435305879;
unsigned long long int var_8 = 3967847241042954522ULL;
unsigned long long int var_11 = 13515310720908709605ULL;
long long int var_12 = 627576653993688216LL;
int zero = 0;
unsigned char var_14 = (unsigned char)223;
unsigned char var_15 = (unsigned char)181;
void init() {
}

void checksum() {
    hash(&seed, var_14);
    hash(&seed, var_15);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
