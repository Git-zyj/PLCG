#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_4 = (unsigned short)64046;
unsigned char var_15 = (unsigned char)65;
unsigned long long int var_16 = 5315219396906482009ULL;
int var_17 = 353580465;
int zero = 0;
int var_18 = -878856377;
long long int var_19 = -7068216188855493465LL;
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
