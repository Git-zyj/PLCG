#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_2 = (signed char)118;
int var_4 = 459750721;
unsigned short var_5 = (unsigned short)4622;
unsigned long long int var_11 = 536320036097994227ULL;
unsigned long long int var_13 = 9213361646622226928ULL;
unsigned int var_14 = 2867255885U;
unsigned int var_16 = 3572482368U;
int zero = 0;
signed char var_18 = (signed char)-49;
int var_19 = 257641736;
signed char var_20 = (signed char)-107;
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
