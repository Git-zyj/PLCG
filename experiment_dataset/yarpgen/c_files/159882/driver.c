#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_4 = (signed char)66;
unsigned short var_8 = (unsigned short)25299;
signed char var_9 = (signed char)-47;
unsigned char var_10 = (unsigned char)98;
long long int var_11 = 6563716533145823838LL;
unsigned char var_16 = (unsigned char)17;
int zero = 0;
unsigned long long int var_17 = 15719450044731576877ULL;
long long int var_18 = 2916840822617227578LL;
void init() {
}

void checksum() {
    hash(&seed, var_17);
    hash(&seed, var_18);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
