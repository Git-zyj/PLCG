#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_0 = -33570987;
unsigned int var_3 = 621278202U;
unsigned int var_5 = 3233640210U;
int var_7 = 1805773927;
unsigned int var_8 = 2106568670U;
unsigned int var_9 = 3325229992U;
unsigned int var_14 = 1913105020U;
int zero = 0;
unsigned char var_16 = (unsigned char)49;
int var_17 = 1849360485;
unsigned long long int var_18 = 8792188945305317248ULL;
unsigned long long int var_19 = 1955907042898481913ULL;
void init() {
}

void checksum() {
    hash(&seed, var_16);
    hash(&seed, var_17);
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
