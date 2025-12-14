#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_16 = 13501903016671795501ULL;
unsigned long long int var_17 = 9066952448331029919ULL;
int zero = 0;
unsigned long long int var_19 = 11095500257907172953ULL;
unsigned long long int var_20 = 11039712856208584151ULL;
void init() {
}

void checksum() {
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
