#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_3 = 1585915424411333064ULL;
unsigned long long int var_6 = 4801646172220051420ULL;
unsigned long long int var_8 = 10598819713486449064ULL;
unsigned long long int var_10 = 7487401235792511672ULL;
unsigned long long int var_14 = 10705753957300765971ULL;
unsigned long long int var_16 = 4917250646314515621ULL;
int zero = 0;
unsigned long long int var_18 = 14123686677526806339ULL;
unsigned long long int var_19 = 539653122749455913ULL;
void init() {
}

void checksum() {
    hash(&seed, var_18);
    hash(&seed, var_19);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
