#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_1 = (signed char)-92;
unsigned long long int var_2 = 13406387199373280695ULL;
unsigned long long int var_5 = 7122481342046616236ULL;
signed char var_8 = (signed char)-3;
signed char var_9 = (signed char)-33;
unsigned long long int var_10 = 14012538252081736256ULL;
signed char var_16 = (signed char)77;
int zero = 0;
unsigned long long int var_18 = 11682546685435422129ULL;
unsigned long long int var_19 = 7905222306452690450ULL;
signed char var_20 = (signed char)112;
signed char var_21 = (signed char)-118;
unsigned long long int var_22 = 7490043192639639402ULL;
void init() {
}

void checksum() {
    hash(&seed, var_18);
    hash(&seed, var_19);
    hash(&seed, var_20);
    hash(&seed, var_21);
    hash(&seed, var_22);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
