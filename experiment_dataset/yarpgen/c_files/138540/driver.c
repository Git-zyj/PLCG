#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_0 = (short)-3438;
unsigned long long int var_1 = 8590815701491892032ULL;
unsigned long long int var_2 = 17417428168341146891ULL;
signed char var_3 = (signed char)-13;
long long int var_4 = 816875819727678183LL;
signed char var_7 = (signed char)111;
signed char var_8 = (signed char)121;
int var_9 = -225233844;
int zero = 0;
long long int var_10 = 9075964460882153892LL;
unsigned long long int var_11 = 3860046084574079377ULL;
unsigned long long int var_12 = 2379637857291825966ULL;
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
