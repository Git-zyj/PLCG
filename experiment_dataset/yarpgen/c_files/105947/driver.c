#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_1 = -7987591263770332511LL;
long long int var_2 = 893196932731994213LL;
int var_8 = -655458497;
int zero = 0;
long long int var_10 = 8955145582032819250LL;
unsigned char var_11 = (unsigned char)137;
unsigned short var_12 = (unsigned short)13591;
void init() {
}

void checksum() {
    hash(&seed, var_10);
    hash(&seed, var_11);
    hash(&seed, var_12);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
