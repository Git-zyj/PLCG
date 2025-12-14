#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_1 = 11240237994400090761ULL;
unsigned char var_4 = (unsigned char)187;
unsigned char var_6 = (unsigned char)66;
int var_7 = -625388247;
unsigned long long int var_8 = 17224135048656284923ULL;
unsigned char var_9 = (unsigned char)118;
long long int var_12 = -3567587695793739613LL;
int zero = 0;
unsigned char var_13 = (unsigned char)208;
unsigned char var_14 = (unsigned char)145;
signed char var_15 = (signed char)-4;
void init() {
}

void checksum() {
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
