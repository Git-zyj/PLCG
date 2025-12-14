#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_0 = (short)-27917;
unsigned int var_1 = 2406803913U;
long long int var_2 = -1307798206061052060LL;
unsigned long long int var_9 = 291429911685285395ULL;
unsigned long long int var_12 = 5890809535434750671ULL;
long long int var_16 = -7621942986879357402LL;
int zero = 0;
unsigned short var_19 = (unsigned short)54022;
unsigned char var_20 = (unsigned char)223;
unsigned char var_21 = (unsigned char)110;
void init() {
}

void checksum() {
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
