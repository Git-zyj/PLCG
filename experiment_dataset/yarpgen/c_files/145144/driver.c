#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_1 = 13000527099577338255ULL;
unsigned long long int var_2 = 7417895903016026261ULL;
unsigned long long int var_8 = 5428768620695439195ULL;
unsigned long long int var_16 = 8903203095905613201ULL;
unsigned long long int var_17 = 866447457034042010ULL;
int zero = 0;
unsigned long long int var_18 = 3554552906580746669ULL;
unsigned long long int var_19 = 11236810281039325870ULL;
unsigned long long int var_20 = 4156531380892799440ULL;
void init() {
}

void checksum() {
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
