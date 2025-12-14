#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_8 = 3899759665505440043LL;
long long int var_9 = 4112252873601741225LL;
int var_12 = -2072220267;
unsigned long long int var_14 = 17157260469571096444ULL;
int zero = 0;
long long int var_17 = 5723024857486043348LL;
unsigned short var_18 = (unsigned short)15080;
unsigned long long int var_19 = 9089834298414899952ULL;
unsigned short var_20 = (unsigned short)27794;
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
