#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_0 = 14545694633821358394ULL;
long long int var_1 = 2029173344746614614LL;
unsigned long long int var_3 = 8582836563464704554ULL;
long long int var_7 = -5032502015024574797LL;
unsigned long long int var_8 = 1343182484030777702ULL;
int zero = 0;
long long int var_10 = -8719164420426202612LL;
unsigned long long int var_11 = 14995409154701895028ULL;
void init() {
}

void checksum() {
    hash(&seed, var_10);
    hash(&seed, var_11);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
