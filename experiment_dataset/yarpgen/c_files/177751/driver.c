#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_9 = (signed char)-103;
unsigned short var_10 = (unsigned short)61968;
signed char var_13 = (signed char)111;
unsigned long long int var_16 = 11547037513933644970ULL;
unsigned short var_17 = (unsigned short)26518;
int zero = 0;
unsigned long long int var_18 = 8775652686865092180ULL;
unsigned char var_19 = (unsigned char)138;
unsigned char var_20 = (unsigned char)226;
signed char var_21 = (signed char)-45;
void init() {
}

void checksum() {
    hash(&seed, var_18);
    hash(&seed, var_19);
    hash(&seed, var_20);
    hash(&seed, var_21);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
