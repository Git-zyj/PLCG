#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_1 = (short)8441;
int var_3 = 1096002217;
signed char var_5 = (signed char)-37;
signed char var_6 = (signed char)-73;
unsigned char var_9 = (unsigned char)165;
int zero = 0;
int var_10 = -625266066;
unsigned short var_11 = (unsigned short)42667;
short var_12 = (short)32557;
unsigned long long int var_13 = 7602516564782396492ULL;
void init() {
}

void checksum() {
    hash(&seed, var_10);
    hash(&seed, var_11);
    hash(&seed, var_12);
    hash(&seed, var_13);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
