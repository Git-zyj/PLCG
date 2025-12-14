#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_9 = 10589742701255838405ULL;
unsigned long long int var_10 = 16723578725293084944ULL;
long long int var_11 = 847400090650753076LL;
unsigned long long int var_12 = 1405011243157839220ULL;
int zero = 0;
long long int var_15 = 4218516773191870178LL;
unsigned long long int var_16 = 16476356698698185005ULL;
long long int var_17 = -3555449923204523833LL;
void init() {
}

void checksum() {
    hash(&seed, var_15);
    hash(&seed, var_16);
    hash(&seed, var_17);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
