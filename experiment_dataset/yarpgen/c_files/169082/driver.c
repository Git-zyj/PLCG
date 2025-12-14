#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_1 = 5336269613138938133ULL;
unsigned char var_2 = (unsigned char)37;
long long int var_3 = 4863781788054782779LL;
long long int var_5 = 1883603158050078528LL;
signed char var_6 = (signed char)-91;
int zero = 0;
unsigned int var_10 = 2928305694U;
unsigned long long int var_11 = 6804391214181018181ULL;
signed char var_12 = (signed char)-54;
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
