#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_1 = (signed char)-13;
signed char var_6 = (signed char)102;
unsigned short var_7 = (unsigned short)33902;
int var_8 = -947649463;
int zero = 0;
unsigned char var_12 = (unsigned char)217;
int var_13 = 820078190;
long long int var_14 = -2257940726739336216LL;
unsigned long long int var_15 = 4260234178950056903ULL;
void init() {
}

void checksum() {
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
