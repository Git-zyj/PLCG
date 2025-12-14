#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_2 = (signed char)68;
int var_3 = -495663060;
unsigned long long int var_4 = 6966779922092938072ULL;
unsigned long long int var_5 = 16070678437441051557ULL;
unsigned char var_7 = (unsigned char)125;
unsigned long long int var_9 = 17742809555169965617ULL;
int zero = 0;
signed char var_10 = (signed char)-103;
signed char var_11 = (signed char)-58;
unsigned char var_12 = (unsigned char)202;
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
