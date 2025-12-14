#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_3 = (signed char)-3;
unsigned int var_5 = 4112865871U;
long long int var_6 = -8907565141359322463LL;
unsigned char var_8 = (unsigned char)142;
long long int var_10 = 4481913484016733664LL;
int zero = 0;
int var_11 = 1739645315;
long long int var_12 = 3251442602360544341LL;
unsigned short var_13 = (unsigned short)38385;
unsigned long long int var_14 = 8966331056885266856ULL;
unsigned int var_15 = 2811802146U;
void init() {
}

void checksum() {
    hash(&seed, var_11);
    hash(&seed, var_12);
    hash(&seed, var_13);
    hash(&seed, var_14);
    hash(&seed, var_15);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
